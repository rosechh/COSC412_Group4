using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class avatarCustomization : MonoBehaviour
{
    public char[] avatarCustomizationState = new char[10];
    public int avatarID = 00000000;

    void Start ()
    {
        //avatarID = userSettings.getAvatar();
        /*
        if (avatarID == 00000000)
        {
            int[] avatarList = userSettings.getAvatarList();
            bool uniqueID = false;
            while(uniqueID == false)
            {
                avatarID = Random(99999999);
                for(int i = 0; i < avatarList.length; i++)
                {
                    if (avatarID == avatarList[i])
                        break;
                }

            }
        }
        else
        {
            userSettings.getAvatarID().getCustomizationSettings();
        }
        */
	}
}
