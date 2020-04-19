using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextHealthController : MonoBehaviour
{
    public static int healthCount=5;

    Text health;
    void Start()
    {
      health=GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
      health.text="Player Health: "+ healthCount;
    }
}
