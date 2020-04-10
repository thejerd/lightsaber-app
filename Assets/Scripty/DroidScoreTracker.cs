using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DroidScoreTracker : MonoBehaviour
{
    public static int d_scoreCount=0;

    Text d_score;


    void Start()
    {
      d_score=GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
      d_score.text="Droid Score: "+ d_scoreCount;
    }
}
