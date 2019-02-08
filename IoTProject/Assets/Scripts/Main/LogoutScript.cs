using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using NCMB;

public class LogoutScript : MonoBehaviour {
	public GameObject LogoutMessage;
	public GameObject ErrorMessage;

	public void PushLogout(){
		LogoutMessage.SetActive(true);
	}

	public void PushCancel(){
		LogoutMessage.SetActive(false);
	}

	public void Logout(){
		bool LogoutCheck = true;
		// ログアウト
		try {
    		NCMBUser.LogOutAsync ();
		} catch (NCMBException e) {
			LogoutCheck = false;
			LogoutMessage.SetActive(false);
			ErrorMessage.SetActive(true);
    		UnityEngine.Debug.Log ("エラー: " + e.ErrorMessage);
		} finally {
			if(LogoutCheck){
				LogoutMessage.SetActive(false);
				PlayerPrefs.DeleteAll();
				SceneManager.LoadScene("Start");
			}
		}
	}

	public void ErrorOK(){
		ErrorMessage.SetActive(false);
	}
}
