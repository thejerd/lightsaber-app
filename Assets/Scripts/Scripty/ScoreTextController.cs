using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreTextController : MonoBehaviour
{
  public static int scoreCount=0;

  Text score;
  void Start()
  {
    score=GetComponent<Text>();
  }

  // Update is called once per frame
  void Update()
  {
    score.text="Droids Destroyed: "+ scoreCount;
  }
}
