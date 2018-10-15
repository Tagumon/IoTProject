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
	float lifeTime = 1f;
	float time = 0f;

	public GameObject ProfileEdit;

	public void Start(){
		
	}

	void Update () {
		if(Console.text == "Succeed!" || Console.text == "Error!"){
			time += Time.deltaTime;
			if(time > lifeTime){
				Console.text = "";
				time = 0f;
			}
		}
	}
	

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
				Console.text = "Succeed!";
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

		

		//データ更新反映
		/*NCMBQuery<NCMBObject> query;
		query = new NCMBQuery<NCMBObject>("MemberData");
		//_query.WhereEqualTo("Type", "Humid");
		query.FindAsync ((List<NCMBObject> objList, NCMBException e) =>{
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
					string MProfile;
					MNumber = v["MemberNumber"].ToString();
					MName = v["Name"].ToString();
					MGrade = v["Grade"].ToString();
					MProfile = v["Profile"].ToString();
					if(MNumber == ProfileMemberNumber){
						Name.text = "Name:    " + MName;
						Grade.text = "Grade:   " + MGrade;
						Profile.text = "Profile: \n" + MProfile;
					}
					//Debug.Log("Type : " + v["Type"]);
					//Debug.Log("Value : " + v["Variable"]);
				}
			}
		});
		Information.SetActive(true);
		Debug.Log(gameObject.name + " がクリックされた!");*/
	}
}
