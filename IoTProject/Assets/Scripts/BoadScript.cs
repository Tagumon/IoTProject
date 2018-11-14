using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using NCMB;
using System;

public class BoadScript : MonoBehaviour, IPointerClickHandler {
	public GameObject Board;
	//public Text BoardTime;
	public GameObject CloseBt;
	public GameObject EditBt;
	public GameObject TimeTextObject;
	public GameObject ContentTextObject;
	public GameObject SpaceObject;
	Text TimeText;
	Text ContentText;
	public GameObject Viewport;
	public GameObject InputText;
	public InputField SendText;
	public Text Console;
	float lifeTime = 1f;
	float time = 0f;
	public Button CloseButton;
	private NCMBObject obj;
	ObjCtrl script;


	// Use this for initialization
	void Start () {
		CloseButton.onClick.AddListener(CloseOnClick);	
	}
	
	// Update is called once per frame
	void Update () {
		if(Console.text == "Succeed!" || Console.text == "Error!"){
			time += Time.deltaTime;
			if(time > lifeTime){
				Console.text = "";
				time = 0f;
			}
		}
	}

	public void OnPointerClick(PointerEventData pointerData){
		BoardDataUpdate();
		Board.SetActive(true);
		CloseBt.SetActive(true);
		EditBt.SetActive(true);
		Debug.Log(gameObject.name + " がクリックされた!");
	}

	
	void BoardDataUpdate(){
		NCMBQuery<NCMBObject> _query;
		_query = new NCMBQuery<NCMBObject>("LabBoard");
		_query.OrderByDescending("createDate");
		//_query.Limit = 7;
		_query.FindAsync ((List<NCMBObject> objList, NCMBException e) =>{
			//Debug.Log("SerchOK");
			if(e != null){
				//エラー処理
				Console.text = "Error!";
			}else{
				//成功処理
				Console.text = "Succeed!";
				foreach(NCMBObject v in objList){
					//BoardTime.text += v["updateDate"] + "\n";
					GameObject TimeTextPrefab = (GameObject)Instantiate(TimeTextObject);
					TimeTextPrefab.transform.SetParent(Viewport.transform);
					TimeText = TimeTextPrefab.GetComponent<Text>();
					GameObject ContentTextPrefab = (GameObject)Instantiate(ContentTextObject);
					ContentTextPrefab.transform.SetParent(Viewport.transform);
					ContentText = ContentTextPrefab.GetComponent<Text>();
					GameObject SpacePrefab = (GameObject)Instantiate(SpaceObject);
					SpacePrefab.transform.SetParent(Viewport.transform);
					string CD = v.CreateDate.ToString();
					DateTime dt = System.DateTime.ParseExact(CD, "M/d/yyyy h:mm:ss tt", System.Globalization.DateTimeFormatInfo.InvariantInfo, System.Globalization.DateTimeStyles.None);
					dt = dt.AddHours(9);
					TimeText.text += ("  " + dt.ToString() + ": "); 
					TimeText.rectTransform.sizeDelta = new Vector2(TimeText.preferredWidth, TimeText.preferredHeight);
					TimeText.rectTransform.sizeDelta = new Vector2(TimeText.preferredWidth, TimeText.preferredHeight);
					//Debug.Log(dt);
					ContentText.text += ("  " + v["Text"].ToString());
					ContentText.rectTransform.sizeDelta = new Vector2(ContentText.preferredWidth, ContentText.preferredHeight);
					ContentText.rectTransform.sizeDelta = new Vector2(ContentText.preferredWidth, ContentText.preferredHeight);
					//Debug.Log("TextOK");
				}
			}
		});

	}
	public void SendTextData(){
		NCMBObject obj = new NCMBObject ("LabBoard");
			obj.Add ("Text", SendText.text);
			obj.SaveAsync ((NCMBException e) => {      
    		if (e != null) {
        		//エラー処理
				Console.text = "Error!";
			}else{
				//成功処理
				Console.text = "Succeed!";
   			}                   
		});
		/* TimeText.text = "";
		ContentText.text = "";*/
		SendText.text = "";
		var clones = GameObject.FindGameObjectsWithTag("Text");
		foreach (var clone in clones){
			Destroy(clone);
		}
		Invoke("BoardDataUpdate", 1f);
	}
	public void CloseOnClick(){
		/* TimeText.text = "";
		ContentText.text = "";*/
		//BoardTime.text = "";
		var clones = GameObject.FindGameObjectsWithTag("Text");
		foreach (var clone in clones){
			Destroy(clone);
		}
		SendText.text = "";
		InputText.SetActive(false);
		Board.SetActive(false);	
		CloseBt.SetActive(false);
		EditBt.SetActive(false);
	}
	public void InputFieldOpen(){
		InputText.SetActive(true);
	}
	public void InputFieldClose(){
		InputText.SetActive(false);
	}
}
