using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using NCMB;

public class BoadScript : MonoBehaviour, IPointerClickHandler {
	public GameObject Boad;
	//public Text Name;
	//public Text Grade;
	public Text Console;
	float lifeTime = 1f;
	float time = 0f;

	public Button CloseButton;
	public Button EditButton;
	public GameObject ProfileEdit;
	private NCMBObject obj;


	// Use this for initialization
	void Start () {
		CloseButton.onClick.AddListener(CloseOnClick);	
		EditButton.onClick.AddListener(EditOnClick);	
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
		/*NCMBQuery<NCMBObject> _query;
		_query = new NCMBQuery<NCMBObject>("MemberData");
		//_query.WhereEqualTo("Type", "Humid");
		_query.FindAsync ((List<NCMBObject> objList, NCMBException e) =>{
			if(e != null){
				//エラー処理
				Console.text = "Error!";
			}else{
				//成功処理
				Console.text = "Succeed!";
				foreach(NCMBObject v in objList){
					string MNumber;
					string MName;
					string MGrade;
					MNumber = v["MemberNumber"].ToString();
					MName = v["Name"].ToString();
					MGrade = v["Grade"].ToString();
					if(MNumber == MemberNumber){
						Name.text = MName;
						Grade.text = MGrade;
					}
					//Debug.Log("Type : " + v["Type"]);
					//Debug.Log("Value : " + v["Variable"]);
				}
			}
		});*/

		Boad.SetActive(true);
		Debug.Log(gameObject.name + " がクリックされた!");
	}

	public void EditOnClick(){
		ProfileEdit.SetActive(true);
	} 
	public void CloseOnClick(){
		//Name.text = "";
		//Grade.text = "";
		Boad.SetActive(false);	
	}
}
