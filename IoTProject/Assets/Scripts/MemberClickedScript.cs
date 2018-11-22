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
	float lifeTime = 1f;
	float time = 0f;
	public Canvas canvas;
	public Button CloseButton;
	ProfileSaveScript script;
	ObjCtrl ObjCtrlscript;
	public InputField EditInput;

	// Use this for initialization
	void Start () {
		ObjCtrlscript = ObjectControl.GetComponent<ObjCtrl>();

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void OnPointerClick(PointerEventData pointerData){
		//Debug.Log("OK");
		Transform PB;
		Transform VPort;
		//Transform CT;
		Transform IF;
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
				Console.text = "ReceptionSucceed!";
				foreach(NCMBObject v in objList){
					string MNumber;
					string MName;
					string MGrade;
					string MProfile;
					MNumber = v["MemberNumber"].ToString();
					MName = v["Name"].ToString();
					MGrade = v["Grade"].ToString();
					MProfile = v["Profile"].ToString();
					if(MNumber == MemberNumber.ToString()){
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
		Information.SetActive(true);
		ObjCtrlscript.RotateControl = false;
		Debug.Log(gameObject.name + " がクリックされた!");
	}
}
