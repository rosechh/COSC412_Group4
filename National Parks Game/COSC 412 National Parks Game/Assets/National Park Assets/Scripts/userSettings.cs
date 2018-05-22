using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserSettings : MonoBehaviour
{
    public string cUsername;
    public int cUserID;
    public int[] cCustomizationID;
    List<string> userNameList = new List<string>(new string[] {"Andrew", "Patrick", "Laura"});
    List<int> userIDList = new List<int>(new int[] {132396, 130166, 122070});
    List<int> userCustomIDList = new List<int>(new int[] { 111113, 130166, 122070 });
    // Use this for initialization
    void Start ()
    {
        cUsername = userNameList[0];
        cUserID = userIDList[0];
	}
	
	// Update is called once per frame
	void Update ()
    {
		
	}
}
