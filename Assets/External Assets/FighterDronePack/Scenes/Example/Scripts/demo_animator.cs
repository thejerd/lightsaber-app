using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class demo_animator : MonoBehaviour {


    public Slider slider;
    public Slider leftArmSlider;
    public Slider rightArmSlider;
    public Text infoText;
    public GameObject asset;
    private Animator anim;
    public float eyeIntensity = 1;

    public GameObject leftArm;
    public GameObject rightArm;

    private bool gunFiring = false;

    public Material[] mats;


    private bool leftArmPlus = false;
    private bool leftArmMinus = false;
    private bool rightArmMinus = false;
    private bool rightArmPlus = false;
    private Quaternion rotLeft;
    private Quaternion rotRight;

    private int currentTexIndex = 0;

    public void ResetArmRot()
    {
        leftArmPlus = false;
        leftArmMinus = false;
        rightArmMinus = false;
        rightArmPlus = false;

        leftArm.transform.rotation = rotLeft;
        rightArm.transform.rotation = rotRight;
    }

    void Start () {
       
        anim = asset.GetComponent<Animator>();
        infoText.text = "";
        rotLeft = leftArm.transform.rotation;
        rotRight = rightArm.transform.rotation;
         
    }	
	public void Idle1()
    {
        anim.SetTrigger("idle1");
        infoText.text = "Idle 1";
    }

    public void Idle2()
    {
        anim.SetTrigger("idle2");
        infoText.text = "Idle 2";
    }
    public void Fire()
    {
        ToggleFiring();
        infoText.text = "Fire Gun (additive)";
    }
    public void Die()
    {
        anim.SetTrigger("die");
        infoText.text = "Die";
    }
    public void Land()
    {
        anim.SetTrigger("land");
        infoText.text = "Land";
    }
    public void Takeoff()
    {
        anim.SetTrigger("takeoff");
        infoText.text = "Take-off";
    }
    public void Hit1()
    {
        anim.SetTrigger("hit1");
        infoText.text = "Hit 1";
    }
    public void Hit2()
    {
        anim.SetTrigger("hit2");
        infoText.text = "Hit 2";
    }
    public void Hit3()
    {
        anim.SetTrigger("hit3");
        infoText.text = "Hit 3";
    }

    public void SpeedSliderChange()
    {
        anim.speed = slider.value;
    }

    public void LeftArmPlus()
    {
        leftArmPlus = true;
        leftArmMinus = false;
    }

    public void LeftArmMinus()
    {
        leftArmMinus = true;
        leftArmPlus = false;
    }

    public void RightArmPlus()
    {
        rightArmPlus = true;
        rightArmMinus = false;
    }

    public void RightArmMinus()
    {
        rightArmMinus = true;
        rightArmPlus = false;
    }

    /// <summary>
    /// Update is called every frame, if the MonoBehaviour is enabled.
    /// </summary>
    void Update()
    {
        if(leftArmMinus || leftArmPlus || rightArmPlus || rightArmMinus)
        {
            // do
            if(leftArmMinus)
            {
                leftArm.transform.RotateAround(leftArm.transform.position, leftArm.transform.right, Time.deltaTime * -90f);
            }
            else if(leftArmPlus)
            {
                leftArm.transform.RotateAround(leftArm.transform.position, leftArm.transform.right, Time.deltaTime * 90f);
            }

            if(rightArmMinus)
            {
                rightArm.transform.RotateAround(rightArm.transform.position, rightArm.transform.right, Time.deltaTime * -90f);
            }
            else if(rightArmPlus)
            {
                rightArm.transform.RotateAround(rightArm.transform.position, rightArm.transform.right, Time.deltaTime * 90f);
            }
        }
    }

    public void RightArmSliderChange()
    {

    }

    public void NextTexture()
    {
        currentTexIndex++;

        if(currentTexIndex >= mats.Length)
        {
            currentTexIndex = 0;
        }
      
        Renderer rend = asset.GetComponentInChildren<Renderer>();
 
        rend.material = mats[currentTexIndex];
        infoText.text = rend.material.name;
    }

    public void ToggleFiring()
    {
        if (gunFiring)
        {
            anim.SetTrigger("stopGunFire");
            gunFiring = false;
        }
        else
        {
            anim.SetTrigger("startGunFire");
            gunFiring = true;
        }
        

    }



    //public void TogglePeripheral(string name)
    //{

    //    GameObject go = transform.Find(name).gameObject;

    //    MeshRenderer mr = go.GetComponent<MeshRenderer>();


    //    mr.enabled = !mr.enabled;

    //    if(name == "cap_right")
    //    {
    //        TogglePeripheral("cap_left");
    //    }
    //}


    //public void TogglePeripheral(string name)
    //{

    //    switch(name)
    //    {
    //        case "P1":
    //            Renderer rend1 = p1.GetComponent<Renderer>();
    //            rend1.enabled = !rend1.enabled;
    //            break;
    //        case "P2":
    //            Renderer rend2 = p2.GetComponent<Renderer>();
    //            rend2.enabled = !rend2.enabled;
    //            break;
    //        case "P3":
    //            Renderer rend3 = p3.GetComponent<Renderer>();
    //            rend3.enabled = !rend3.enabled;
    //            break;
    //        case "P4":
    //            Renderer rend4 = p4.GetComponent<Renderer>();
    //            rend4.enabled = !rend4.enabled;
    //            break;
    //        case "P5":
    //            Renderer rend5 = p5.GetComponent<Renderer>();
    //            rend5.enabled = !rend5.enabled;
    //            break;
    //    }
    //}

    public void RandomiseColors()
    {
       Color color = new Color(Random.value, Random.value, Random.value, 1.0f);
       
       // get hdr of emission color
       Renderer rend = asset.GetComponentInChildren<Renderer>();
       rend.material = mats[currentTexIndex];

       rend.material.SetColor("_EmissionColor", color * eyeIntensity);
    }

    //public void ToggleTextured()
    //{
    //    Renderer rend = Textured.GetComponentInChildren<Renderer>();
    //    if (rend.enabled == true)
    //    {
    //        transform.position = new Vector3(0, 0, 0);
    //        Textured.GetComponentInChildren<Renderer>().enabled = false;
    //    }
    //    else
    //    {
    //        transform.position = leftPos.transform.position;
    //        Textured.GetComponentInChildren<Renderer>().enabled = true;
    //    }

    //}
}
