using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using NCMB;

public class MemberClickedScript : MonoBehaviour, IPointerClickHandler {
	public int MemberNumber;
	public GameObject Information;
	public GameObject ObjectControl;
	public Text Name;
	public Text Grade;
	public Text Profile;
	public Text Console;
	//float lifeTime = 1f;
	//float time = 0f;
	public Canvas canvas;
	ProfileSaveScript script;
	ObjCtrl ObjCtrlscript;
	public InputField EditInput;

	// Use this for initialization
	void Start () {
		//Lab情報取得(回転停止のため)
		ObjCtrlscript = ObjectControl.GetComponent<ObjCtrl>();

	}
	
	// Update is called once per frame
	void Update () {
	
	}
	//メンバークリック時プロフィール表示
	public void OnPointerClick(PointerEventData pointerData){
		//Debug.Log("OK");
		Transform PB;
		Transform VPort;
		//Transform CT;
		Transform IF;
		//MenberNumber割当(ProfileSaveScriptのSend時に使用)
		foreach (Transform child in canvas.transform){
			if(child.name == "ProfileBoad"){
				PB = child;
				foreach(Transform PBchild in PB.transform){
					if(PBchild.name == "Viewport"){
						VPort = PBchild;
						/* foreach(Transform VPchild in VPort.transform){
							if(VPchild.name == "Content"){
								CT = VPchild;*/
								foreach(Transform VPchild in VPort.transform){
									if(VPchild.name == "InputField"){
										IF = VPchild;
										foreach(Transform IFchild in IF.transform){
											if(IFchild.name == "EditOK"){
												script = IFchild.gameObject.GetComponent<ProfileSaveScript>();
											}
										}
									}
								}
							//}
						//}
					}
				}
			}
		}
		script.ProfileMemberNumber = MemberNumber;
		//Debug.Log("MemberNumber is " + script.ProfileMemberNumber);
		NCMBQuery<NCMBObject> _query;
		_query = new NCMBQuery<NCMBObject>("MemberData");
		//_query.WhereEqualTo("Type", "Humid");
		_query.FindAsync ((List<NCMBObject> objList, NCMBException e) =>{
			if(e != null){
				//エラー処理
				Console.text = "Error!";
			}else{
				//成功処理
				//プロフィールテキスト反映
				Console.text = "ReceptionSucceed!";
				foreach(NCMBObject v in objList){
					string MNumber;
					MNumber = v["MemberNumber"].ToString();
					if(MNumber == MemberNumber.ToString()){
						string MName;
						string MGrade;
						string MProfile;
						MName = v["Name"].ToString();
						MGrade = v["Grade"].ToString();
						MProfile = v["Profile"].ToString();
						Name.text = "Name:    " + MName;
						Grade.text = "Grade:   " + MGrade;
						Profile.text = MProfile;
						EditInput.text = MProfile;
					}
					//Debug.Log("Type : " + v["Type"]);
					//Debug.Log("Value : " + v["Variable"]);
				}
				Console.text = "WriteSucced!";
			}
		});
		//プロフィールボード表示
		Information.SetActive(true);

		//解像度変更
    	if ((float)Screen.height / (float)Screen.width >= 2) {
			// 2:1
			Debug.Log((float)Screen.height / (float)Screen.width);
			Information.GetComponent<RectTransform>().sizeDelta = new Vector2 (900, 2000);
		} else {
			// 16:9
			Debug.Log((float)Screen.height / (float)Screen.width);
			Information.GetComponent<RectTransform>().sizeDelta = new Vector2 (900, 1800);
		}
		
		//回転固定
		ObjCtrlscript.RotateControl = false;
		Debug.Log(gameObject.name + " がクリックされた!");
	}
}
