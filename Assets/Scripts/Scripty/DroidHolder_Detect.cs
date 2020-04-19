using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DroidHolder_Detect : MonoBehaviour
{
    // Start is called before the first frame update
    public static int droidCount=1;
    public GameObject droid;
    public Vector3 droidPosition;
    void Start()
    {
      string name="Droid_Holder";


    }

    // Update is called once per frame
    void Update()
    {

      if(DroidHealthController.dHealthCount==0){
        GameObject currDroid=GameObject.Find(name);
        print("Destroying:: "+currDroid);
        spawnNewDroid(currDroid);
      }

    }


    void OnCollisionEnter(Collision other){
      //CapsuleController didItHit = instaBullet.GetComponent<CapsuleController>();

        Debug.Log("Droid has been hit!!!!");
        //rb.AddRelativeForce(direction*speed, ForceMode.Impulse);



    }

    void spawnNewDroid(GameObject currDroid){
      //currDroid.SetActive(false);
      GameObject toDestroy= droid.transform.GetChild(0).gameObject;
      //Destroy(toDestroy);
      toDestroy.SetActive(false);
      ScoreTextController.scoreCount+=1;
      Invoke("reOpenDroid", 1.5f);

      //GameObject drone_holder = Instantiate(droid, droidPosition, Quaternion.LookRotation(Vector3.forward)) as GameObject;
      //drone_holder.transform.parent = this.transform;
      DroidHealthController.dHealthCount=2;


    }

    void reOpenDroid(){
      GameObject drone = droid.transform.GetChild(0).gameObject;
      drone.transform.position= Vector3.zero;
      drone.SetActive(true);

    }
}
