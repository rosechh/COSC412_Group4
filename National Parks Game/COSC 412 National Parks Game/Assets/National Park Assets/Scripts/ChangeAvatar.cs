using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChangeAvatar : MonoBehaviour
{
    public Dropdown avatar_Dropdown;
    public Animator avatar_Animator;
    string avatar_Selection;
    int avatar_DropdownVal;

	// Use this for initialization
	void Start ()
    {
        avatar_Dropdown = GetComponent<Dropdown>();
        avatar_Animator = GetComponent<Animator>();
        avatar_DropdownVal = 0;
	}
	
	// Update is called once per frame
	void Update ()
    {
        avatar_DropdownVal = avatar_Dropdown.value;
        if (avatar_DropdownVal == 0)
            avatar_Animator.Play("Idle_Avatar1");
        if (avatar_DropdownVal == 1)
            avatar_Animator.Play("Idle_Avatar2");
        if (avatar_DropdownVal == 2)
            avatar_Animator.Play("Idle_Avatar3");
        if (avatar_DropdownVal == 3)
            avatar_Animator.Play("Idle_Avatar4");
        if (avatar_DropdownVal == 4)
            avatar_Animator.Play("Idle_Avatar5");
        if (avatar_DropdownVal == 5)
            avatar_Animator.Play("Idle_Avatar6");
        if (avatar_DropdownVal == 6)
            avatar_Animator.Play("Idle_Avatar7");
        if (avatar_DropdownVal == 7)
            avatar_Animator.Play("Idle_Avatar8");
        else
            avatar_Animator.Play("Idle_Avatar1");
    }
}
