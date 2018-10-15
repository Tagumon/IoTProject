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
	public InputField EditInput;

	public void CloseOnClick(){
		Name.text = "";
		Grade.text = "";
		Profile.text = "";
		ProfileInput.SetActive(false);
		Information.SetActive(false);	
	}
}
