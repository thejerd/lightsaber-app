﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CapsuleController : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject droidSpawner;
    public Rigidbody rb;
    public float speed=1.0f;
    public Vector3 direction;
    public Vector3 newPosition;
    public bool hitSaber = false;
    public GameObject textObject;
    public int collisionCount;
    public GameObject player;
    public GameObject droid;
    //public GameObject bullet;
    void Start()
    {
        rb=this.GetComponent<Rigidbody>();
        direction = Vector3.up;
      
        //direction=transform.parent.TransformDirection(Vector3.forward);


    }

    // Update is called once per frame
    void Update()
    {
        //rb.AddRelativeForce(direction*speed, ForceMode.VelocityChange);
        //rb.AddRelativeForce(direction.forward, ForceMode.VelocityChange);
        //rb.AddForce(direction.forward * speed);
        //rb.velocity= this.transform.up*-speed*20;
        rb.velocity= this.transform.parent.forward*-speed*20;
        //Vector3 direction= this.transform.parent.
        //transform.LookAt(Vector3.down);
        //use rb.MovePosition(position) with position as the reflected position


        //  rb=GetComponent<Rigidbody>();
            //rb.MovePosition(Vector3.zero);
            //rb.AddRelativeForce(direction*speed, ForceMode.VelocityChange);
            //droid.transform.LookAt(Vector3.zero);
    }
    void OnCollisionEnter(Collision other){
      Debug.Log("Collided with: ");
      Debug.Log( other.gameObject.name);

      if(other.gameObject.name=="New Kylo 3-23-20"){
          speed=-speed;
          //rb.rotation = Quaternion.identity;
          //rb.velocity=Vector3.zero;
          //direction=Vector3.down;
        //rb.AddRelativeForce(direction*speed, ForceMode.VelocityChange);
          //rb.MovePosition(newPosition);
          //collisionCount=collisionCount+1;
          //string text=textObject.GetComponent<Text>().text;
          Invoke("changeDroidHealth", 0.6f);
      }
      else if(other.gameObject.name=="fighter_drone"){
        Destroy (this.gameObject);
          //mspeed=-mspeed;
      }
      else if(hitSaber){
        rb.velocity=Vector3.zero;
      }
      else{
        //rb.velocity=Vector3.zero;
        //Destroy (this.gameObject);
      }
      //mspeed=-mspeed;
    }

    void changeDroidHealth(){
      DroidHealthController.dHealthCount-=1;
      //this.transform.gameObject.SetActive(false);
      Destroy(this.transform.gameObject);
    }
}