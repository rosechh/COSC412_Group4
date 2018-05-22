using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIPosition : MonoBehaviour {

	// Use this for initialization
	void Start ()
    {
        float size = Screen.width / 20f;
        Rect r = new Rect(Screen.width - size, 0, size, size);
        GetComponent<GUITexture>().pixelInset = r;
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
