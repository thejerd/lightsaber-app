using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    public GameObject droidSpawner;
    public GameObject cubeSpawner_R;
    //public bool droidSwitch= false;
    //public bool cubeSwitch_R= true;
    public float switchWait;
    public float switchMostWait;
    public float switchLeastWait;
    public int startWait;
    public int startWait2;

    void Start()
    {
      cubeSpawner_R.SetActive(false);
      //droidSpawner.SetActive(false);
      //StartCoroutine(waitD_On_C_Off());
    //  StartCoroutine(waitC_On_D_Off());
    InvokeRepeating("switchActives1", startWait, switchWait);
    InvokeRepeating("switchActives2", startWait2, switchWait);


    }

    // Update is called once per frame
    void Update()
    {
      if((ScoreTextController.scoreCount>2 )&&( (ScoreTextController.scoreCount%3) == 0)){
        if (droidSpawner.activeInHierarchy){
      //    droidOff_cubeOn();
        }
        else{
          //cubeOff_DroidOn();
        }
      }
      if((Spawner.cubeCount>2)&&(Spawner.cubeCount%3)==0){
      //  cubeOff_DroidOn();
      }


    }

    void droidOff_cubeOn(){
      droidSpawner.SetActive(false);
      cubeSpawner_R.SetActive(true);

    }
    void cubeOff_DroidOn(){
      droidSpawner.SetActive(true);
      cubeSpawner_R.SetActive(false);
    }
    IEnumerator waitD_On_C_Off(){
      yield return new WaitForSeconds(startWait);
      while (true)
      {
        Debug.Log("SWITCHING");
        //switchActives();
      //  droidSpawner.SetActive(false);
      //  cubeSpawner_R.SetActive(true);

          yield return new WaitForSeconds(switchWait);
      }


    }

    IEnumerator waitC_On_D_Off(){
      yield return new WaitForSeconds(startWait+10.0f);
      while (true)
      {
        Debug.Log("Setting droid to ACTIVE");
        droidSpawner.SetActive(true);
        cubeSpawner_R.SetActive(false);

          yield return new WaitForSeconds(switchWait);
      }


    }
    void switchActives1(){
      Debug.Log("SWITCHING");
    //  if (droidSpawner.activeInHierarchy){
        droidSpawner.SetActive(false);
        cubeSpawner_R.SetActive(true);
    //  }else{
      //  droidSpawner.SetActive(true);
      //  cubeSpawner_R.SetActive(false);
      //}

    }
    void switchActives2(){
      Debug.Log("SWITCHING");
    //  if (droidSpawner.activeInHierarchy){
        droidSpawner.SetActive(true);
        cubeSpawner_R.SetActive(false);
    //  }else{
      //  droidSpawner.SetActive(true);
      //  cubeSpawner_R.SetActive(false);
      //}

    }

}
