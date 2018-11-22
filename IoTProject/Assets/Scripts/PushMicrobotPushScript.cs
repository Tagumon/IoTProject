using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SlackApi;
using System;
using System.Net;
using System.Threading;

public class PushMicrobotPushScript : MonoBehaviour {
	public Text Console;
	float lifeTime = 1f;
	float time = 0f;
	public Button PushButton;

	// Use this for initialization
	
	public void PushOnClick(){
		var message = "Push!";

		var data = new PostMessageData{};
		data.text = message;
		var routine = SlackAPI.PostMessage(data);
		StartCoroutine(routine);
		Console.text = "PushSucceed!";

	}
	
	void Start () {
		PushButton.onClick.AddListener(PushOnClick);
	}
	
	// Update is called once per frame
	void Update () {
		/*/if(Console.text == "Succeed!" || Console.text == "Error!"){
			time += Time.deltaTime;
			if(time > lifeTime){
				Console.text = "";
				time = 0f;
			}
		}*/
	}
}
