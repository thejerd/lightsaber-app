using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Laser_Projectile : MonoBehaviour
{
    //GameObject prefab;
    public float mspeed = -10.0f;
    public GameObject saber;

    void Start()
    {
        //this.transform.LookAt(new Vector3(0f,0f,0f ));

    }

    // Update is called once per frame
    void Update()
    {


      //this.transform.Translate(0.0f* Time.deltaTime , -13.0f*mspeed* Time.deltaTime, -17.65f*mspeed*Time.deltaTime, saber.transform);
      //this.transform.Translate(0.0f* Time.deltaTime , 0.0f*mspeed* Time.deltaTime, -17.65f*mspeed*Time.deltaTime, saber.transform);
      this.transform.Translate(0.0f* Time.deltaTime , 10.0f*mspeed* Time.deltaTime, 0.0f*mspeed*Time.deltaTime, saber.transform);

    }
    void OnTriggerEnter(Collider otherguy){
      Debug.Log(otherguy.gameObject.name);
      mspeed=-mspeed;
    }

}
