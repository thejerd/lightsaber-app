using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gameplay_droid_laser : MonoBehaviour
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
      this.transform.Translate(0.0f* Time.deltaTime , -19.9f*mspeed* Time.deltaTime, -50.1f*mspeed*Time.deltaTime, saber.transform);


    }
    void OnTriggerEnter(Collider other){
      Debug.Log(other.gameObject.name);
      if(other.gameObject.name=="New Kylo"){
          mspeed=-mspeed;
      }
      else{
        mspeed=0;
      }
      //mspeed=-mspeed;
    }

}
