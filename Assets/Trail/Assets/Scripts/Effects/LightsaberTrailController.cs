using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Controller class which uses the LightsaberTrail class to show a trail when we move the lightsaber
/// </summary>
[RequireComponent(typeof(LightsaberTrail))]
public class LightsaberTrailController : MonoBehaviour {

    LightsaberTrail lightsaberTrail;
    public MeshRenderer rend;
    static bool trail = true;
    static bool justTurnedOn = false; 

    //rend, trail, and justTurnedOn are all used to detect when the lightsaber has been turned on or off so 
    // we can efficiently start and stop the trail. justTurnedOn is necessary because StartCoRoutine
    // only needs to be called once, not every frame even though it is inside the Update function. It had
    // to go in the update function because it isn't allowed in a static function such as triggerTrail.
    // Fuck this, it was annoying

    void Start()
    {
        lightsaberTrail = GetComponent<LightsaberTrail>();
        rend = GetComponent<MeshRenderer>();
    }

    void Update()
    {
        if (trail){

            //////////////////////////////////////////////////
            lightsaberTrail.Iterate(Time.time);
            lightsaberTrail.UpdateTrail(Time.time, 0f);
            //////////////////////////////////////////////////

            if (justTurnedOn){
                StartCoroutine(DelayTrailOn(.6f));
            }
            else {
                rend.enabled=true;
            }
        }
        else {
            rend.enabled=false;
        }

    }

    public static void toggleTrail(){
        if (trail){
            trail=false; 
        }
        else {
            justTurnedOn = true;
            trail=true;
        }
    }

    IEnumerator DelayTrailOn(float time)
    {
        yield return new WaitForSeconds(time);

        // Code to execute after the delay
        rend.enabled = true;
        justTurnedOn = false;
    }
}
