using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CapsuleController : MonoBehaviour
{
    // Start is called before the first frame update
    public Rigidbody rb;
    public float speed=1.0f;
    public Vector3 direction;
    public Vector3 newPosition;
    public bool hitSaber = false;
    void Start()
    {
        rb=this.GetComponent<Rigidbody>();
        direction = Vector3.up;

    }

    // Update is called once per frame
    void Update()
    {
    //  rb=GetComponent<Rigidbody>();
        //rb.MovePosition(Vector3.zero);
        //rb.AddRelativeForce(direction*speed, ForceMode.VelocityChange);
        rb.AddRelativeForce(direction*speed, ForceMode.VelocityChange);
        //use rb.MovePosition(position) with position as the reflected position

    }
    void OnCollisionEnter(Collision other){
      Debug.Log(other.gameObject.name);

      if(other.gameObject.name=="New Kylo"){
          //speed=-speed;
          //rb.velocity=Vector3.zero;
          //direction=Vector3.down;
          //rb.MovePosition(newPosition);

          this.transform.Rotate(180.0f, 0.0f, 0.0f, Space.Self);
          //rb.AddRelativeForce(direction*speed, ForceMode.VelocityChange);
      }
      else if(other.gameObject.name=="Plane"){
          //mspeed=-mspeed;
      }
      else if(hitSaber){
        rb.velocity=Vector3.zero;
      }
      else{
        //speed=0;
      }
      //mspeed=-mspeed;
    }
}
