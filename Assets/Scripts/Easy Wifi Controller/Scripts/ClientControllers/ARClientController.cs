using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using EasyWiFi.Core;

namespace EasyWiFi.ClientControls
{
    [AddComponentMenu("EasyWiFiController/Client/UserControls/Accelerometer")]
    public class ARClientController : MonoBehaviour, IClientController
    {
        public string controlName = "AR";
        public Transform inputTransform; 

        ARControllerType ar;
        string arKey;

        // Use this for initialization
        void Awake()
        {
            arKey = EasyWiFiController.registerControl(EasyWiFiConstants.CONTROLLERTYPE_AR, controlName);
            ar = (ARControllerType)EasyWiFiController.controllerDataDictionary[arKey];
        }


        //here we grab the input and map it to the data list
        void Update()
        {
            mapInputToDataStream();
        }

        public void mapInputToDataStream()
        {
            Vector3 inputPosition = inputTransform.position;
            ar.POSITION_X = inputPosition.x;
            ar.POSITION_Y = inputPosition.y;
            ar.POSITION_Z = inputPosition.z;

            Quaternion inputRotation = inputTransform.rotation;
            ar.ROTATION_X = inputRotation.x; 
            ar.ROTATION_Y = inputRotation.y; 
            ar.ROTATION_Z = inputRotation.z; 
        }

    }

}