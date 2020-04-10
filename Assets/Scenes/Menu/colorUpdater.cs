using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using static saber_color;

public class colorUpdater : MonoBehaviour
{
    public GameObject left;
    public GameObject right;
    public GameObject point;
    public GameObject main;
    public GameObject trail;


 void Start () {
     left = GameObject.Find("LeftSaber");
     right = GameObject.Find("RightSaber");
     point = GameObject.Find("SaberPointLight");
     main = GameObject.Find("New Kylo");
     trail = GameObject.Find("Trail");
 }
 
 // Update is called once per frame
 void Update () {
     
     if(main.GetComponent<LineRenderer>().startColor != saber_color.saberColor) {
         Debug.Log("ifff");
         main.GetComponent<LineRenderer>().startColor = saber_color.saberColor;
         main.GetComponent<LineRenderer>().endColor = saber_color.saberColor;
         //main.GetComponent<Renderer>().material.color = saber_color.saberColor;
         right.GetComponent<LineRenderer>().startColor = saber_color.saberColor;
         right.GetComponent<LineRenderer>().endColor = saber_color.saberColor;
         left.GetComponent<LineRenderer>().startColor = saber_color.saberColor;
         left.GetComponent<LineRenderer>().endColor = saber_color.saberColor;
         point.GetComponent<Light>().color = saber_color.saberColor;
     }


     if (Input.GetKeyDown(KeyCode.R))
     {
         saber_color.nextColor();
     }
     if (Input.GetKeyDown(KeyCode.B))
     {
         saber_color.saberColor = Color.blue;
     }
     if (Input.GetKeyDown(KeyCode.G))
     {
         saber_color.saberColor = Color.green;
     }
     if (Input.GetKeyDown(KeyCode.M))
     {
         saber_color.saberColor = Color.white;
     }
 }
}
