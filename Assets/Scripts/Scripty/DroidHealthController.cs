using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DroidHealthController : MonoBehaviour
{
  public static int dHealthCount=2;

  Text droid;
  void Start()
  {
    droid=GetComponent<Text>();
  }

  // Update is called once per frame
  void Update()
  {
    droid.text="Droid Health: "+ dHealthCount;
  }
}
