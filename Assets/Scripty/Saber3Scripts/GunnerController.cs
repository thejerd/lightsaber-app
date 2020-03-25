using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GunnerController : MonoBehaviour
{
    public GameObject bullet;
    public float speed = 5f;
    public float timeToStart=1.0f;
    public float repeaterTime=1.0f;
    public float timeToStart_Lasers=1.0f;
    public float repeaterTime_Lasers=1.0f;
    public Vector3 vectorCorrector;
    public Rigidbody rb;
    public Vector3 direction;
    public GameObject tr;
    public GameObject tl;
    public GameObject br;
    public GameObject bl;
    //public bool hitSaber = false;

    // Start is called before the first frame update
    void Start()
    {

      InvokeRepeating("Lasers", timeToStart_Lasers, repeaterTime_Lasers);
      InvokeRepeating("Shooter", timeToStart, repeaterTime);
      rb=this.GetComponent<Rigidbody>();
      direction = Vector3.down;
      tr.SetActive(false);
      tl.SetActive(false);
      br.SetActive(false);
      bl.SetActive(false);


    }

    // Update is called once per frame
    void Update()
    {

      /*GameObject instaBullet = Instantiate(bullet, transform.position, Quaternion.identity) as GameObject;
      Rigidbody rb = instaBullet.GetComponent<Rigidbody>();
      rb.AddRelativeForce(Vector3.up * speed);*/




    }

    void Lasers(){
      tr.SetActive(true);
      tl.SetActive(true);
      br.SetActive(true);
      bl.SetActive(true);



    }


    void Shooter(){

      //rotationCorrection= Quaternion.AngleAxis(30, Vector3.forward);
      //GameObject instaBullet = Instantiate(bullet, transform.position+vectorCorrector, Quaternion.identity) as GameObject;
      GameObject instaBullet = Instantiate(bullet, transform.position+vectorCorrector, Quaternion.Euler(-90, 0, 0)) as GameObject;
      Debug.Log("VECTOR IM LOOKING FOR:: "+ this.transform.position+vectorCorrector);
      Rigidbody rb = instaBullet.GetComponent<Rigidbody>();
      CapsuleController didItHit = instaBullet.GetComponent<CapsuleController>();
      tr.SetActive(false);
      tl.SetActive(false);
      br.SetActive(false);
      bl.SetActive(false);
      //didItHit.hitSaber
      Debug.Log(didItHit.hitSaber);

      //rb.AddRelativeForce(Vector3.up * speed);
      //rb.AddForce(Vector3.forward * speed);

    }
    void OnCollisionEnter(Collision other){
      //CapsuleController didItHit = instaBullet.GetComponent<CapsuleController>();

        Debug.Log("Hit");
        //rb.AddRelativeForce(direction*speed, ForceMode.Impulse);



    }
}
