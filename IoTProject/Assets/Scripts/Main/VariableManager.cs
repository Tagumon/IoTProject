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
	public Button UpdateButton;
	public GameObject LabObject;

	
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

				double TempData = 0.0f;
				double TempAve = 0.0f;
				double HumidData = 0.0f;
				double HumidAve = 0.0f;
				double LuxData = 0.0f;
				double LuxAve = 0.0f;
				double LuxLD = 0.0f;
				double LuxLU = 0.0f;
				double LuxRU = 0.0f;
				double LuxRD = 0.0f;
				double UnitylxLD = 0.0f;
				double UnitylxLU = 0.0f;
				double UnitylxRU = 0.0f;
				double UnitylxRD = 0.0f;

				foreach(NCMBObject v in objList){
					string DataType;
					string Data;
					DataType = v["Type"].ToString();
					Data = v["Variable"].ToString();
					if(DataType == "TemperatureLD"){
						TempData += double.Parse(Data);
					}else if(DataType == "TemperatureLU"){
						TempData += double.Parse(Data);
					}else if(DataType == "TemperatureRU"){
						TempData += double.Parse(Data);
					}else if(DataType == "TemperatureRD"){
						TempData += double.Parse(Data);
					}else if(DataType == "HumidLD"){
						HumidData += double.Parse(Data);
					}else if(DataType == "HumidLU"){
						HumidData += double.Parse(Data);
					}else if(DataType == "HumidRU"){
						HumidData += double.Parse(Data);
					}else if(DataType == "HumidRD"){
						HumidData += double.Parse(Data);
					}else if(DataType == "IlluminationLD"){
						LuxLD = double.Parse(Data);
						LuxData += LuxLD;
						UnitylxLD = LuxLD * (40f / 260f);
					}else if(DataType == "IlluminationLU"){
						LuxLU = double.Parse(Data);
						LuxData += LuxLU;
						UnitylxLU = LuxLU * (40f / 260f);
					}else if(DataType == "IlluminationRU"){
						LuxRU = double.Parse(Data);
						LuxData += LuxRU;
						UnitylxRU = LuxRU * (40f / 260f);
					}else if(DataType == "IlluminationRD"){
						LuxRD = double.Parse(Data);
						LuxData += LuxRD;
						UnitylxRD = LuxRD * (40f / 260f);
					}
					//Debug.Log("Type : " + v["Type"]);
					//Debug.Log("Value : " + v["Variable"]);
				}
				foreach(Transform Lightchild in LabObject.transform){
					if(Lightchild.name == "LULight"){
						Lightchild.GetComponent<Light>().range =  (float)UnitylxLD;
					}else if(Lightchild.name == "RULight"){
						Lightchild.GetComponent<Light>().range =  (float)UnitylxRU;
					}else if(Lightchild.name == "LDLight"){
					Lightchild.GetComponent<Light>().range =  (float)UnitylxLD;
					}else if(Lightchild.name == "RDLight"){
						Lightchild.GetComponent<Light>().range =  (float)UnitylxRD;
					}							
				}

				Debug.Log(TempData);
				Debug.Log(HumidData);
				Debug.Log(LuxData);
				Debug.Log("LuxLD" + LuxLD);
				Debug.Log("LuxLU" + LuxLU);
				Debug.Log("LuxRD" + LuxRD);
				Debug.Log("LuxRU" + LuxRU);
				

				TempAve = TempData / 4.0f;
				HumidAve = HumidData / 4.0f;
				LuxAve =  LuxData / 4.0f;

				Temp.text = TempAve.ToString("F2") + "℃";
				Humid.text = HumidAve.ToString("F2") + "%";
				Illumination.text = LuxAve.ToString("F2") + "lx";
			}
		});

		//在席情報取得
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

		//メンバナンバ取得
		NCMBQuery<NCMBObject> UMquery;
		UMquery = new NCMBQuery<NCMBObject>("user");
		UMquery.WhereEqualTo("userName", PlayerPrefs.GetString("UName"));
		UMquery.FindAsync((List<NCMBObject> UMList, NCMBException e) =>{
			if(e != null){
				//エラー処理
				Console.text = "Error!";
			}else{
				foreach(NCMBObject u in UMList){
					PlayerPrefs.SetString("UMNumber", u["MemberNumber"].ToString());
					PlayerPrefs.Save();
				}
			}
		});
	}
	
	void Start (){
	UpdateButton.onClick.AddListener(UpdateOnClick);
	UpdateOnClick();
	}
}
