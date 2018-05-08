using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class userSettings : MonoBehaviour
{
    //8-digit integer representing a unique user. Invalid 0000 0000, 9999 9999, all negatives. Will change to String if only username on SQL database.
    public int userID;
    //List of integers representing customization settings. If not in SQL database, will attempt store adn access in-game.
    public int[] userCustomID;
    //List of integers, either 1 and 0, representing a user's achievement progress.
    public int[] achievements;
    //9-digit integer representing determined by earned achievements and game points.
    public int userPoints;

	// Use this for initialization
	void Start ()
    {
        //userID = pull from SQL database;
        //userCustomID = pull from SQL database;
        //userPoints = pull from SQL database;
		
	}
    int getUserID()
    {
        if(userID != 00000000 && userID != 99999999)
            return userID;
        return -1;
    }
    int getUserCustomID()
    {
        if(userCustomID != 0000)
        return -1;
    }
    int getUserPoints()
    {
        return -1;
    }

	
	// Update is called once per frame
	void Update ()
    {
		
	}
}
