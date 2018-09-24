using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NCMB;

public class VariableManager : MonoBehaviour {
	public Text Temp;
	public Text Humid;
	public Text Console;
	float lifeTime = 1f;
	float time = 0f;
	public Button UpdateButton;

	private NCMBObject obj;
	// Use this for initialization
	public void UpdateOnClick () {
		NCMBQuery<NCMBObject> _query;
		_query = new NCMBQuery<NCMBObject>("VariableData");
		//_query.WhereEqualTo("Type", "Humid");
		_query.FindAsync ((List<NCMBObject> objList, NCMBException e) =>{
			if(e != null){
				//エラー処理
				Console.text = "Error!";
			}else{
				//成功処理
				Console.text = "Succeed!";
				foreach(NCMBObject v in objList){
					string DataType;
					string Data;
					DataType = v["Type"].ToString();
					Data = v["Variable"].ToString();
					if(DataType == "Temparature"){
						Temp.text = Data + "℃";
					}else if(DataType == "Humid"){
						Humid.text = Data + "%";
					}
					//Debug.Log("Type : " + v["Type"]);
					//Debug.Log("Value : " + v["Variable"]);
				}
			}
		});
	}
	
	void Start (){
	UpdateButton.onClick.AddListener(UpdateOnClick);
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
}
