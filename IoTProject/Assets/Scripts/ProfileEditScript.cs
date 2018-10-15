using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProfileEditScript : MonoBehaviour {

	public GameObject ProfileEdit;
	public InputField ProfileEditInput;
	public Text ProfileText;


	public void ProfileEditOpen(){
		ProfileEditInput.text = ProfileText.text;
		ProfileEdit.SetActive(true);
	}
	public void ProfileEditClose(){
		ProfileEdit.SetActive(false);
	}
}
