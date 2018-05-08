using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CycleSprites : MonoBehaviour
{
    public Sprite sp1;
    public Sprite sp2;
    public Sprite sp3;
    Sprite locSp;
 
	void Start ()
    {
        Button btn = gameObject.GetComponent<Button>();
        locSp = gameObject.GetComponent<Sprite>();
        btn.onClick.AddListener(Cycle);
	}
	void Cycle ()
    {
        if (locSp == sp1)
            locSp = sp2;
        else if (locSp == sp2)
            locSp = sp3;
        else
            locSp = sp1;
	}
}
