using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using EasyWiFi.Core;

namespace EasyWiFi.ClientControls
{
    //[AddComponentMenu("EasyWiFiController/Client/UserControls/Gyro")]
    public class sensors_client : MonoBehaviour, IClientController
    {
        public string controlName = "Sensor";

        sensor_controller_type sensor;
        string sensorKey;

        // Use this for initialization
        void Awake()
        {
            sensorKey = EasyWiFiController.registerControl(EasyWiFiConstants.CONTROLLERTYPE_SENSOR, controlName);
            sensor = (sensor_controller_type)EasyWiFiController.controllerDataDictionary[sensorKey];
            if (SystemInfo.supportsGyroscope)
                Input.gyro.enabled = true;
                // add accelerometer check?
        }


        //here we grab the input and map it to the data list
        void Update()
        {
            mapInputToDataStream();
        }

        public void mapInputToDataStream()
        {
            Quaternion gyroQuat;
            gyroQuat.w = 0f; gyroQuat.x = 0f; gyroQuat.y = 0f; gyroQuat.z = 0f;

            //acceleromter sensor
            gyroQuat = Input.gyro.attitude;

            sensor.GYRO_W = gyroQuat.w;
            sensor.GYRO_X = gyroQuat.x;
            sensor.GYRO_Y = gyroQuat.y;
            sensor.GYRO_Z = gyroQuat.z;

            Vector3 grav; grav.x = 0f; grav.y = 0f; grav.z = 0f;
            grav = Input.gyro.gravity;
            sensor.GRAVITY_X = grav.x;
            sensor.GRAVITY_Y = grav.y;
            sensor.GRAVITY_Z = grav.z;

            Vector3 accel; accel.x = 0f; accel.y = 0f; accel.z = 0f;
            accel = Input.acceleration;
            sensor.ACCELERATION_X = accel.x;
            sensor.ACCELERATION_Y = accel.y;
            sensor.ACCELERATION_Z = accel.z;


        }

    }

}