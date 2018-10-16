using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using NCMB;

public class BoadScript : MonoBehaviour, IPointerClickHandler {
	public GameObject Board;
	//public Text BoardTime;
	public Text BoardText;
	public GameObject InputText;
	public InputField SendText;
	public Text Console;
	float lifeTime = 1f;
	float time = 0f;
	public Button CloseButton;
	private NCMBObject obj;


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
		Debug.Log(gameObject.name + " がクリックされた!");
	}

	
	void BoardDataUpdate(){
		BoardText.text = "";
		NCMBQuery<NCMBObject> _query;
		_query = new NCMBQuery<NCMBObject>("LabBoard");
		_query.OrderByDescending("createDate");
		//_query.Limit = 10;
		_query.FindAsync ((List<NCMBObject> objList, NCMBException e) =>{
			Debug.Log("SerchOK");
			if(e != null){
				//エラー処理
				Console.text = "Error!";
			}else{
				//成功処理
				Console.text = "Succeed!";
				foreach(NCMBObject v in objList){
					//BoardTime.text += v["updateDate"] + "\n";
					BoardText.text += (v.CreateDate.ToString() + ":  "); 
					Debug.Log("DateOK");
					BoardText.text += v["Text"].ToString() + "\n";
					Debug.Log("TextOK");
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
		BoardText.text = "";
		SendText.text = "";
		Invoke("BoardDataUpdate", 1f);
	}
	public void CloseOnClick(){
		BoardText.text = "";
		//BoardTime.text = "";
		SendText.text = "";
		InputText.SetActive(false);
		Board.SetActive(false);	
	}
	public void InputFieldOpen(){
		InputText.SetActive(true);
	}
	public void InputFieldClose(){
		InputText.SetActive(false);
	}
}
