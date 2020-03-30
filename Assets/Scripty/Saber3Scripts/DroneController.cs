using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DroneController : MonoBehaviour
{
  public GameObject bullet;
  public AudioClip alarm;
  private AudioSource source;
  public Vector3 vectorCorrector;
  public Rigidbody rb;
  public Vector3 direction;
  public GameObject r;
  public GameObject l;
  public GameObject tip;
  public float speed = 5f;
  public float timeToStart=1.0f;
  public float repeaterTime=1.0f;
  public float timeToStart_Sound=1.0f;
  public float repeaterTime_Sound=1.0f;
  public float timeToStart_Lasers=1.0f;
  public float repeaterTime_Lasers=1.0f;



  //public bool hitSaber = false;

  // Start is called before the first frame update
  void Start()
  {
    source = GetComponent<AudioSource>();
    r.SetActive(false);
    l.SetActive(false);

    tip.SetActive(false);
    InvokeRepeating("Lasers", timeToStart_Lasers, repeaterTime_Lasers);
    InvokeRepeating("Shooter", timeToStart, repeaterTime);
    InvokeRepeating("Laser_Sound", timeToStart_Sound, repeaterTime_Sound);
    rb=this.GetComponent<Rigidbody>();
    direction = Vector3.down;



  }

  // Update is called once per frame
  void Update()
  {

    /*GameObject instaBullet = Instantiate(bullet, transform.position, Quaternion.identity) as GameObject;
    Rigidbody rb = instaBullet.GetComponent<Rigidbody>();
    rb.AddRelativeForce(Vector3.up * speed);*/




  }

  void Lasers(){
    r.SetActive(true);
    l.SetActive(true);

    tip.SetActive(true);




  }

  void Laser_Sound(){
    source.PlayOneShot (alarm);
  }


  void Shooter(){

    //rotationCorrection= Quaternion.AngleAxis(30, Vector3.forward);
    //GameObject instaBullet = Instantiate(bullet, transform.position+vectorCorrector, Quaternion.identity) as GameObject;
    GameObject instaBullet = Instantiate(bullet, transform.position+vectorCorrector, Quaternion.Euler(-90, 0, 0)) as GameObject;
    Debug.Log("VECTOR IM LOOKING FOR:: "+ this.transform.position+vectorCorrector);
    Rigidbody rb = instaBullet.GetComponent<Rigidbody>();
    CapsuleController didItHit = instaBullet.GetComponent<CapsuleController>();
    r.SetActive(false);
    l.SetActive(false);

    tip.SetActive(false);
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
