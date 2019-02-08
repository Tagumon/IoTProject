using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetButtonScript : MonoBehaviour {

	// Use this for initialization
	public GameObject LabObject;
	
	public void Reset(){
		LabObject.transform.Rotate(0, 0, 0);
	}
}
