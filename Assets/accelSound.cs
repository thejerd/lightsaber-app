using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EasyWiFi.Core;

public class accelSound : MonoBehaviour {

	public Transform heavySwing1;
	Vector3 accel;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void playSounds(AccelerometerControllerType accelerometer){
		//data
		accel.x = accelerometer.ACCELERATION_X;
		accel.y = accelerometer.ACCELERATION_Y;
		accel.z = accelerometer.ACCELERATION_Z;

		//print ("x: " + accel.x);
		//print ("y: " + accel.y);
		//print ("z: " + accel.z);
	
	}
}
