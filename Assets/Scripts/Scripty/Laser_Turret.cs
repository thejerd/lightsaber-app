using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Laser_Turret : MonoBehaviour
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
      this.transform.Translate(-18.0f*mspeed* Time.deltaTime , 0.0f* Time.deltaTime, 21.0f*mspeed*Time.deltaTime, saber.transform);
  
    }




}
