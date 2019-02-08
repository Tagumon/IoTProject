using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProfileCloseScript : MonoBehaviour {

	public Text Name;
	public Text Grade;
	public Text Profile;
	public GameObject Information;
	public GameObject ProfileInput;
	public GameObject ObjectControl;
	public GameObject EditButton;
	ObjCtrl ObjCtrlScript;
	void Start(){
		ObjCtrlScript = ObjectControl.GetComponent<ObjCtrl>();
	}

	public void CloseOnClick(){
		Name.text = "";
		Grade.text = "";
		Profile.text = "";
		ProfileInput.SetActive(false);
		Information.SetActive(false);
		EditButton.SetActive(false);	
		ObjCtrlScript.RotateControl = true;
	}
}
