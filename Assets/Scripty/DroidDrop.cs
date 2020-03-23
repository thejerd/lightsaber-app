using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DroidDrop : MonoBehaviour
{
    //GameObject prefab;
    public float mspeed = 10.0f;
    public GameObject droid;

    void Start()
    {
        //prefab=Resources.Load("saber MK-4") as GameObject;

    }

    // Update is called once per frame
    void Update()
    {


      //transform.Translate(0.0f , 0.0f, mspeed*Time.deltaTime );
      this.transform.Translate(0.0f* Time.deltaTime , -10.0f*mspeed* Time.deltaTime, 0.0f*mspeed*Time.deltaTime, droid.transform);
      //this.transform.Translate(0.0f* Time.deltaTime , 0.0f* Time.deltaTime, mspeed*Time.deltaTime, Space.Self );
      //this.transform.Translate(0.0f* Time.deltaTime , mspeed*Time.deltaTime, 0.0f* Time.deltaTime, Space.World );
      //this.transform.Translate( mspeed*Time.deltaTime, 0.0f* Time.deltaTime,0.0f* Time.deltaTime , Space.Self );

    }
    void OnTriggerEnter(Collider other){
      Debug.Log(other.gameObject.name);
      mspeed=1;
    }

}
