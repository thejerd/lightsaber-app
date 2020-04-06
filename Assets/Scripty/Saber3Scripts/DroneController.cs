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
  public float timeToStart_Anim_L=1.0f;
  public float repeaterTime_Anim_L=1.0f;
  public float timeToStart_Anim_R=1.0f;
  public float repeaterTime_Anim_R=1.0f;
  public float timeToStart_Anim_L_To_C=1.0f;
  public float repeaterTime_Anim_L_To_C=1.0f;
  public float timeToStart_Anim_R_To_C=1.0f;
  public float repeaterTime_Anim_R_To_C=1.0f;


  public float timeToStart_Lasers=1.0f;
  public float repeaterTime_Lasers=1.0f;
  public float timeToStart_Sound=1.0f;
  public float repeaterTime_Sound=1.0f;
  public float timeToStart_Shoot=1.0f;
  public float repeaterTime_Shoot=1.0f;
  public Animation anim;
  public Vector3 saberPosition;




  //public bool hitSaber = false;

  // Start is called before the first frame update
  void Start()
  {
    source = GetComponent<AudioSource>();
    r.SetActive(false);
    l.SetActive(false);

    tip.SetActive(false);
    InvokeRepeating("Lasers", timeToStart_Lasers, repeaterTime_Lasers);
    InvokeRepeating("Shooter", timeToStart_Shoot, repeaterTime_Shoot);
    InvokeRepeating("Laser_Sound", timeToStart_Sound, repeaterTime_Sound);
    InvokeRepeating("moveLeft", timeToStart_Anim_L, repeaterTime_Anim_L);
    InvokeRepeating("moveRight", timeToStart_Anim_R, repeaterTime_Anim_R);
    InvokeRepeating("left_To_Center", timeToStart_Anim_L_To_C, repeaterTime_Anim_L_To_C);
    InvokeRepeating("right_To_Center", timeToStart_Anim_R_To_C, repeaterTime_Anim_R_To_C);

    rb=this.GetComponent<Rigidbody>();
    direction = Vector3.down;
    //Vector3 newPlace= (0.0,20.0,0.0);



  }

  // Update is called once per frame
  void Update()
  {

    /*GameObject instaBullet = Instantiate(bullet, transform.position, Quaternion.identity) as GameObject;
    Rigidbody rb = instaBullet.GetComponent<Rigidbody>();
    rb.AddRelativeForce(Vector3.up * speed);*/
    transform.LookAt(Vector3.zero);
    //transform.LookAt(saberPosition);




  }

  void Lasers(){
    r.SetActive(true);
    l.SetActive(true);

    tip.SetActive(true);




  }

  void moveLeft(){
    //anim.Play("Droid_Move_Left");
    anim.Play("droid_Training_R");
  }

  void moveRight(){
    //anim.Play("Droid_Move_Right");
    anim.Play("droid_Training_L");
  }

  void left_To_Center(){
    //anim.Play("R_To_Center");
    anim.Play("training_R_To_C");
    //Messed them up lol
  }

  void right_To_Center(){
    //anim.Play("L_To_Center");
    anim.Play("training_L_To_C");
    //Messed them up lol
  }



  void Laser_Sound(){
    source.PlayOneShot (alarm);
  }


  void Shooter(){

    Vector3 thisWay= this.transform.up;
    //GameObject instaBullet = Instantiate(bullet, transform.position+vectorCorrector, Quaternion.LookRotation(thisWay)) as GameObject;
    GameObject instaBullet = Instantiate(bullet, tip.transform.position+vectorCorrector, Quaternion.LookRotation(thisWay)) as GameObject;
    instaBullet.transform.parent = this.transform;
    Rigidbody rb = instaBullet.GetComponent<Rigidbody>();
    r.SetActive(false);
    l.SetActive(false);
    tip.SetActive(false);




    CapsuleController didItHit = instaBullet.GetComponent<CapsuleController>();
    Debug.Log("VECTOR IM LOOKING FOR:: "+ this.transform.position+vectorCorrector);
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
