using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeSprite : MonoBehaviour
{
    Sprite locSprite; //store local sprite

    void Start()
    {
        locSprite = gameObject.GetComponent<Sprite>(); //get sprite
    }
    public void change(Sprite difSprite)
    {
        locSprite = difSprite; //sets sprite
    }
}
