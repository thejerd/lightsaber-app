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
        //prefab=Resources.Load("saber MK-4") as GameObject;

    }

    // Update is called once per frame
    void Update()
    {


      //transform.Translate(0.0f , 0.0f, mspeed*Time.deltaTime );
      this.transform.Translate(0.0f* Time.deltaTime , -13.0f*mspeed* Time.deltaTime, -17.65f*mspeed*Time.deltaTime, saber.transform);
      //this.transform.Translate(0.0f* Time.deltaTime , 0.0f* Time.deltaTime, mspeed*Time.deltaTime, Space.Self );
      //this.transform.Translate(0.0f* Time.deltaTime , mspeed*Time.deltaTime, 0.0f* Time.deltaTime, Space.World );
      //this.transform.Translate( mspeed*Time.deltaTime, 0.0f* Time.deltaTime,0.0f* Time.deltaTime , Space.Self );

    }
    void OnTriggerEnter(Collider otherguy){
      Debug.Log(otherguy.gameObject.name);
      mspeed=-mspeed;
    }

}
