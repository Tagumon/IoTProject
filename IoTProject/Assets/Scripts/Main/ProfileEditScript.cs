using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProfileEditScript : MonoBehaviour {
	public Text Name;
	public Text Grade;
	public Text Profile;
	public GameObject Information;
	public GameObject ProfileEdit;
	public GameObject EditButton;
	public InputField ProfileEditInput;
	public Text ProfileText;
	public GameObject ObjectControl;
	ObjCtrl ObjCtrlScript;
	void Start(){
		ObjCtrlScript = ObjectControl.GetComponent<ObjCtrl>();
	}

	public void ProfileEditOpen(){
		ProfileEditInput.text = ProfileText.text;
		ProfileEdit.SetActive(true);
	}
	public void ProfileEditClose(){
		ProfileEdit.SetActive(false);
	}

	public void CloseOnClick(){
		Name.text = "";
		Grade.text = "";
		Profile.text = "";
		ProfileEdit.SetActive(false);
		Information.SetActive(false);
		EditButton.SetActive(false);	
		ObjCtrlScript.RotateControl = true;
	}
}
