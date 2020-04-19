using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaneController : MonoBehaviour
{
    // Start is called before the first frame update
    public int health=5;
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnCollisionEnter(Collision other){
      //CapsuleController didItHit = instaBullet.GetComponent<CapsuleController>();

        Debug.Log("Plane has been hit!!!!");
        GameObject collider = other.gameObject;
        Debug.Log(collider.name);
        //rb.AddRelativeForce(direction*speed, ForceMode.Impulse);
        Destroy(collider);
        healthUpdater();
        
        TextHealthController.healthCount-=1;


    }

    void healthUpdater(){
      health=health-1;


    }



}
