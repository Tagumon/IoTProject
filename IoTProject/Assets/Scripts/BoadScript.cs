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
	public GameObject ObjectControl;
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
	ObjCtrl ObjCtrlscript;


	// Use this for initialization
	void Start () {
		CloseButton.onClick.AddListener(CloseOnClick);	
		ObjCtrlscript = ObjectControl.GetComponent<ObjCtrl>();
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void OnPointerClick(PointerEventData pointerData){
		BoardDataUpdate();
		Board.SetActive(true);
		CloseBt.SetActive(true);
		EditBt.SetActive(true);
		ObjCtrlscript.RotateControl = false;
		Debug.Log(gameObject.name + " がクリックされた!");
	}

	
	void BoardDataUpdate(){
		//if (SceneManager.GetActiveScene().name == "GameScene" || SceneManager.GetActiveScene().name == "Tutorial") {
    		if ((float)Screen.height / (float)Screen.width >= 2) {
				// 2:1
				Debug.Log((float)Screen.height / (float)Screen.width);
				Board.GetComponent<RectTransform>().sizeDelta = new Vector2 (900, 2000);
				//GameObject.Find("UI").GetComponent<RectTransform>().offsetMin = new Vector2 (0, 90);
				//GameObject.Find("UI").GetComponent<RectTransform>().offsetMax = new Vector2 (0, -120);
			} else {
				// 16:9
				Debug.Log((float)Screen.height / (float)Screen.width);
				Board.GetComponent<RectTransform>().sizeDelta = new Vector2 (900, 1800);
				//Board.GetComponent<RectTransform>().offsetMax = new Vector2 (450, 200);
			}
		//}

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
				Console.text = "ReceptionSucceed!";
				foreach(NCMBObject v in objList){
					//BoardTime.text += v["updateDate"] + "\n";
					GameObject TimeTextPrefab = (GameObject)Instantiate(TimeTextObject);
					TimeTextPrefab.transform.SetParent(Viewport.transform);
					TimeText = TimeTextPrefab.GetComponent<Text>();
					Console.text = "TimeSet!";
					GameObject ContentTextPrefab = (GameObject)Instantiate(ContentTextObject);
					ContentTextPrefab.transform.SetParent(Viewport.transform);
					ContentText = ContentTextPrefab.GetComponent<Text>();
					Console.text = "TextSet!";
					GameObject SpacePrefab = (GameObject)Instantiate(SpaceObject);
					SpacePrefab.transform.SetParent(Viewport.transform);
					Console.text = "SpaceSet!";
					String CD = v.CreateDate.ToString();
					Debug.Log(CD);
					Console.text = "TimeReception!";
					//DateTime dt = DateTime.ParseExact(CD, "M/d/yyyy h:mm:ss tt", null /* System.Globalization.DateTimeFormatInfo.InvariantInfo, System.Globalization.DateTimeStyles.None*/);
					DateTime dt = DateTime.Parse(CD);
					Console.text = "TimeChange!";
					dt = dt.AddHours(9);
					Console.text = "ChangeJapanTime!";
					TimeText.text += ("  " + dt.ToString() + ": "); 
					TimeText.rectTransform.sizeDelta = new Vector2(TimeText.preferredWidth, TimeText.preferredHeight);
					TimeText.rectTransform.sizeDelta = new Vector2(TimeText.preferredWidth, TimeText.preferredHeight);
					//Debug.Log(dt);
					Console.text = "TimeCompleted!";
					ContentText.text += ("  " + v["Text"].ToString());
					ContentText.rectTransform.sizeDelta = new Vector2(ContentText.preferredWidth, ContentText.preferredHeight);
					ContentText.rectTransform.sizeDelta = new Vector2(ContentText.preferredWidth, ContentText.preferredHeight);
					//Debug.Log("TextOK");
					Console.text = "TextCompleted!";
				}
				Console.text = "WriteSucceed!";
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
				Console.text = "SendSucceed!";
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
		ObjCtrlscript.RotateControl = true;
	}
	public void InputFieldOpen(){
		InputText.SetActive(true);
	}
	public void InputFieldClose(){
		InputText.SetActive(false);
	}
}
