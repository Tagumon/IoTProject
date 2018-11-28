using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AspectSettingScript : MonoBehaviour {

	// Use this for initialization
	
	void Start () {
		/*if (SceneManager.GetActiveScene().name == "GameScene" || SceneManager.GetActiveScene().name == "Tutorial") {
    		if ((float)Screen.height / (float)Screen.width > 2) {
				// 2:1
				/*Debug.Log((float)Screen.height / (float)Screen.width);
				GameObject.Find("UI").GetComponent<RectTransform>().offsetMin = new Vector2 (0, 90);
				GameObject.Find("UI").GetComponent<RectTransform>().offsetMax = new Vector2 (0, -120);
			} else {
				// 16:9
				Debug.Log((float)Screen.height / (float)Screen.width);
				GameObject.Find("Boad").GetComponent<RectTransform>().offsetMin = new Vector2 (0, 100);
				GameObject.Find("ProfileBoad").GetComponent<RectTransform>().offsetMax = new Vector2 (0, -100);
			}
		}*/
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
