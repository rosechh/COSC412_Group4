using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimateCamper : MonoBehaviour {

    public Sprite spr1;
    public Sprite spr2;
    public SpriteRenderer sprRen;

	// Use this for initialization
	void Start ()
    {
        spr1 = gameObject.GetComponent<Sprite>();
        sprRen = gameObject.GetComponent<SpriteRenderer>();
        AnimateSprite();
	}
    void AnimateSprite()
    {
        for(int i =1; i > 0; i++)
        {
            if(i % 2 == 0)
                sprRen.sprite = spr1;
            else
                sprRen.sprite = spr2;
            new WaitForSeconds(1);
        }
    }
}
