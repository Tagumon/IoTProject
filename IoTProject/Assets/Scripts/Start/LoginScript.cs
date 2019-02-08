using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using NCMB;

public class LoginScript : MonoBehaviour {
	public GameObject MemberNumberField;
	public GameObject LoginButton;
	public GameObject SignUpButton0;
	public GameObject SignUpButton;
	public GameObject CancelButton;
	public InputField UserName;
	public InputField PassWord;
	public InputField MemberNumber;
	public GameObject SucceedMessage;
	public GameObject ErrorMessage;
	//public LoginDataScript script;
	public Text ErrorText;
	// Use this for initialization
	void Start () {
		StartLogin();
		UserName.text = "";
		PassWord.text = "";
		MemberNumber.text = "";
	}
	
	
	public void SignUpReady(){
		LoginButton.SetActive(false);
		SignUpButton0.SetActive(false);
		MemberNumberField.SetActive(true);
		SignUpButton.SetActive(true);
		CancelButton.SetActive(true);
	}

	public void Cancel(){
		MemberNumberField.SetActive(false);
		SignUpButton.SetActive(false);
		CancelButton.SetActive(false);	
		LoginButton.SetActive(true);
		SignUpButton0.SetActive(true);
			
	}

	public void Login(){
		// ユーザー名とパスワードでログイン
		NCMBUser.LogInAsync (UserName.text, PassWord.text, (NCMBException e) => {
    		if (e != null) {
				ErrorText.text = "ログインに失敗しました\nUserName,PassWordを\n確認してください";
				ErrorMessage.SetActive(true);
        		UnityEngine.Debug.Log ("ログインに失敗: " + e.ErrorMessage);
    		} else {
    	    	UnityEngine.Debug.Log ("ログインに成功！");
				PlayerPrefs.SetString("UName", UserName.text);
				PlayerPrefs.Save();
				PlayerPrefs.SetString("Pword", PassWord.text);
				PlayerPrefs.Save();
				//script.UName = UserName.text;
				//script.PWord = PassWord.text;
				//script.MNumber = 
				SceneManager.LoadScene("Main");
    		}
		});
	}

	public void StartLogin(){
		// ユーザー名とパスワードでログイン
		NCMBUser.LogInAsync (PlayerPrefs.GetString("UName", ""), PlayerPrefs.GetString("PWord", ""), (NCMBException e) => {
    		if (e != null) {
        		UnityEngine.Debug.Log ("ログインに失敗: " + e.ErrorMessage);
    		} else {
    	    	UnityEngine.Debug.Log ("ログインに成功！");
				SceneManager.LoadScene("Main");
    		}
		});
	}

	public void SignUp(){
		//　Userインスタンスの生成
		NCMBUser user = new NCMBUser();

		// ユーザー名・パスワードを設定	
		user.UserName = UserName.text; /* ユーザー名 */	
		user.Password = PassWord.text; /* パスワード */
		user.Add("MemberNumber", MemberNumber.text); /* MemberNumber*/

		// ユーザーの新規登録処理
		user.SignUpAsync((NCMBException e) => { 
    		if (e != null) {
				ErrorText.text = "登録に失敗しました\nもう一度試してください";
				ErrorMessage.SetActive(true);
       			UnityEngine.Debug.Log ("ユーザーの新規登録に失敗: " + e.ErrorMessage);
    		} else {
				SucceedMessage.SetActive(true);
        		UnityEngine.Debug.Log ("ユーザーの新規登録に成功");
    		}
		});
	}
	public void ErrorOK(){
		PassWord.text = "";
		MemberNumber.text = "";
		ErrorMessage.SetActive(false);
		
	}
	public void SucceedOK(){
		UserName.text = "";
		PassWord.text = "";
		MemberNumber.text = "";
		SucceedMessage.SetActive(false);
		MemberNumberField.SetActive(false);
		SignUpButton.SetActive(false);
		CancelButton.SetActive(false);
		LoginButton.SetActive(true);
		SignUpButton0.SetActive(true);
	}
}
