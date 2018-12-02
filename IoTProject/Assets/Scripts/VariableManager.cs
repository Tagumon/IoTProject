using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NCMB;
using System;
public class VariableManager : MonoBehaviour {
	public Text Temp;
	public Text Humid;
	public Text Illumination;

	public Text Console;
	//float lifeTime = 1f;
	//float time = 0f;
	public Button UpdateButton;
	public GameObject LabObject;

	//private NCMBObject obj;
	
	//環境データ取得
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
				//Console.text = "DataUpDated!";
				foreach(NCMBObject v in objList){
					string DataType;
					string Data;
					DataType = v["Type"].ToString();
					Data = v["Variable"].ToString();
					if(DataType == "Temperature"){
						Temp.text = Data + "℃";
					}else if(DataType == "Humid"){
						Humid.text = Data + "%";
					}else if(DataType == "Illumination"){
						Illumination.text = Data + "lx";
						int lx = Int32.Parse(Data);
						Debug.Log(lx);
						float Unitylx = (float)lx * (40f / 150f);
						Debug.Log(Unitylx);
						foreach(Transform Lightchild in LabObject.transform){
							if(Lightchild.name == "LULight"){
								Lightchild.GetComponent<Light>().range =  Unitylx;
							}else if(Lightchild.name == "RULight"){
								Lightchild.GetComponent<Light>().range =  Unitylx;
							}else if(Lightchild.name == "LDLight"){
								Lightchild.GetComponent<Light>().range =  Unitylx;
							}else if(Lightchild.name == "RDLight"){
								Lightchild.GetComponent<Light>().range =  Unitylx;
							}							
						}
					}
					//Debug.Log("Type : " + v["Type"]);
					//Debug.Log("Value : " + v["Variable"]);
				}
			}
		});

		NCMBQuery<NCMBObject> query;
		query = new NCMBQuery<NCMBObject>("MemberData");
		query.FindAsync ((List<NCMBObject> objList, NCMBException e) =>{
			if(e != null){
				//エラー処理
				Console.text = "Error!";
			}else{
				//成功処理
				//プロフィールテキスト反映
				Console.text = "ReceptionSucceed!";
				foreach(NCMBObject v in objList){
					string MNumber;
					string Mattend;
					MNumber = v["MemberNumber"].ToString();
					Mattend = v["Attend"].ToString();
					foreach(Transform Memberchild in LabObject.transform){
						if(Memberchild.name == "Member" + MNumber){
							if(Mattend == "1"){
								Memberchild.GetComponent<Renderer>().material.color =new Color(1, 1, 1);
							}else if(Mattend == "0"){
								Memberchild.GetComponent<Renderer>().material.color = new Color(0.5f, 0.5f, 0.5f, 0.5f);
							}							
						}
					}
				}
				Console.text = "Updated";
			}
		});
	}
	
	void Start (){
	UpdateButton.onClick.AddListener(UpdateOnClick);
	UpdateOnClick();
	}
	// Update is called once per frame
	void Update () {
		/*if(Console.text == "Succeed!" || Console.text == "Error!"){
			time += Time.deltaTime;
			if(time > lifeTime){
				Console.text = "";
				time = 0f;
			}
		}*/
	}
}
