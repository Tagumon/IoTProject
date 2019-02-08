using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NCMB;

public class PushObject : MonoBehaviour {
	private static bool _isInitialized = false;

    public GameObject InputField;
	public InputField Message;

	
    /// <summary>
    ///イベントリスナーの登録
    /// </summary>
    void OnEnable()
    {
        NCMBManager.onRegistration += OnRegistration;
        NCMBManager.onNotificationReceived += OnNotificationReceived;
    }

    /// <summary>
    ///イベントリスナーの削除
    /// </summary>
    void OnDisable ()
    {
        NCMBManager.onRegistration -= OnRegistration;
        NCMBManager.onNotificationReceived -= OnNotificationReceived;
    }

    /// <summary>
    ///端末登録後のイベント
    /// </summary>
    void OnRegistration (string errorMessage)
    {
        if (errorMessage == null) {
            Debug.Log ("OnRegistrationSucceeded");
        } else {
            Debug.Log ("OnRegistrationFailed:" + errorMessage);
        }
    }

    /// <summary>
    ///メッセージ受信後のイベント
    /// </summary>
    void OnNotificationReceived(NCMBPushPayload payload)
    {
        Debug.Log("OnNotificationReceived");
    }

    /// <summary>
    ///シーンを跨いでGameObjectを利用する設定
    /// </summary>
    public virtual void Awake ()
    {
        if (!_isInitialized) {
            _isInitialized = true;
            DontDestroyOnLoad (this.gameObject);
        } else {
            Destroy (this.gameObject);
        }
    }

    public void InputFieldOn(){
		InputField.SetActive(true);
	}
    public void InputFieldOff(){
        Message.text = "";
        InputField.SetActive(false);
    }

	public void SendPush(){
		NCMBPush push = new NCMBPush();
        push.Title = "Notification";
        push.Message = Message.text; 
        push.ImmediateDeliveryFlag = true;
        push.Dialog = true;
        push.PushToAndroid = true;
        push.SendPush();
        Message.text = "";
        InputField.SetActive(false);
	}
}
