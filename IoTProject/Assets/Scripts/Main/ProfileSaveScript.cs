using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using NCMB;
using System.Linq;

public class ProfileSaveScript : MonoBehaviour {
	
	string str;
	public InputField inputField;
	public Text ProfileText;
	public Text Console;
	public int ProfileMemberNumber;
	public GameObject ProfileEdit;


	public void SaveText () {
		//プロフィールデータ更新
		str = inputField.text;
		NCMBQuery<NCMBObject> _query;
		_query = new NCMBQuery<NCMBObject>("MemberData");
		_query.WhereEqualTo("MemberNumber", ProfileMemberNumber);
		_query.FindAsync ((List<NCMBObject> objList, NCMBException e) =>{
			if(e != null){
				//エラー処理
				Console.text = "Error!";
				Debug.Log("ERROR");
			}else{
				//成功処理
				Console.text = "SaveSucceed!";
				Debug.Log("SUCCEED");
				Debug.Log(ProfileMemberNumber);
				Debug.Log("NumberOK");
				objList[0]["Profile"] = str;
				Debug.Log("ListOK");
				objList[0].SaveAsync();
				Debug.Log("SaveOK");
				ProfileText.text = str;
			}
		});
		inputField.text = "";
		ProfileEdit.SetActive(false);	
	}
}
