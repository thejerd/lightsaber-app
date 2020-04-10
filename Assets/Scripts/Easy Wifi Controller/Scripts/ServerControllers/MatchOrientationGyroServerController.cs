using UnityEngine;
using System.Collections;
using EasyWiFi.Core;
using System;

namespace EasyWiFi.ServerControls
{

    [AddComponentMenu("EasyWiFiController/Server/UserControls/Match Orientation Gyro")]
    public class MatchOrientationGyroServerController : MonoBehaviour, IServerController
    {

        public string control = "Gyro";
        public EasyWiFiConstants.PLAYER_NUMBER player = EasyWiFiConstants.PLAYER_NUMBER.Player1;

        //runtime variables
        GyroControllerType[] gyro = new GyroControllerType[EasyWiFiConstants.MAX_CONTROLLERS];
        int currentNumberControllers = 0;
        Quaternion orientation;
        Quaternion initialOrientation;
        Quaternion emptyEuler;
        Quaternion lastFrameOrientation;
        bool firstConnection = false;
        int frameSinceConnected = 0;
        public Transform heavySwing1;
        public Transform heavySwing2;
        public Transform lightSwing1;
        public Transform lightSwing2;

        void OnEnable()
        {
            EasyWiFiController.On_ConnectionsChanged += checkForNewConnections;

            //do one check at the beginning just in case we're being spawned after startup and after the callbacks
            //have already been called
            if (gyro[0] == null && EasyWiFiController.lastConnectedPlayerNumber >= 0)
            {
                EasyWiFiUtilities.checkForClient(control, (int)player, ref gyro, ref currentNumberControllers);
            }
            // print(currentNumberControllers);
        }

        void OnDestroy()
        {
            EasyWiFiController.On_ConnectionsChanged -= checkForNewConnections;
        }

        // Update is called once per frame
        void Update()
        {
            //iterate over the current number of connected controllers
          //  print("hello " + currentNumberControllers);
            for (int i = 0; i < currentNumberControllers; i++)
            {
                frameSinceConnected++;
                if (gyro[i] != null && gyro[i].serverKey != null && gyro[i].logicalPlayerNumber != EasyWiFiConstants.PLAYERNUMBER_DISCONNECTED)
                {
                    // print("made it here");
                    if(orientation.eulerAngles != emptyEuler.eulerAngles && firstConnection == false){
                        firstConnection = true;
                        mapinitialOrientation(i);
                    }
                    mapDataStructureToAction(i);
                }
            }
        }


        public void mapDataStructureToAction(int index)
        {
            orientation.w = gyro[index].GYRO_W;
            orientation.x = -gyro[index].GYRO_X;
            orientation.y = -gyro[index].GYRO_Y;
            orientation.z = gyro[index].GYRO_Z;
            transform.rotation = Quaternion.Inverse(Quaternion.Euler(270,0,0))*orientation;
            swingSound (orientation);
            lastFrameOrientation = orientation;

        }

        public void mapinitialOrientation(int index)
        {
            initialOrientation.w = gyro[index].GYRO_W;
            initialOrientation.x = -gyro[index].GYRO_X;
            initialOrientation.y = -gyro[index].GYRO_Y;
            initialOrientation.z = gyro[index].GYRO_Z;
            lastFrameOrientation = initialOrientation;
            // print(initialOrientation.eulerAngles);
        }


        public void checkForNewConnections(bool isConnect, int playerNumber)
        {
            EasyWiFiUtilities.checkForClient(control, (int)player, ref gyro, ref currentNumberControllers);
        }

        public void swingSound(Quaternion orientation){
            if ((Mathf.Abs (orientation.x - lastFrameOrientation.x) > 0.2) || (Mathf.Abs (orientation.y - lastFrameOrientation.y) > 0.2) ||
                (Mathf.Abs (orientation.z - lastFrameOrientation.z) > 0.2)) {
                if (!heavySwing1.GetComponent<AudioSource>().isPlaying || !heavySwing2.GetComponent<AudioSource>().isPlaying
                    || !lightSwing1.GetComponent<AudioSource>().isPlaying || !lightSwing2.GetComponent<AudioSource>().isPlaying) {
                    int rando = UnityEngine.Random.Range (0, 2);
                    if (rando == 1)
                        lightSwing1.GetComponent<AudioSource> ().Play ();
                    else
                        heavySwing2.GetComponent<AudioSource> ().Play ();
                }
            }
            /*if ((Mathf.Abs (orientation.x - lastFrameOrientation.x) > 0.2) || (Mathf.Abs (orientation.y - lastFrameOrientation.y) > 0.2) ||
                (Mathf.Abs (orientation.z - lastFrameOrientation.z) > 0.2)) {
                if (!heavySwing1.GetComponent<AudioSource>().isPlaying || !heavySwing2.GetComponent<AudioSource>().isPlaying
                    || !lightSwing1.GetComponent<AudioSource>().isPlaying || !lightSwing2.GetComponent<AudioSource>().isPlaying) {
                    int rando = UnityEngine.Random.Range (0, 1);
                    if (rando > 1)
                        heavySwing1.GetComponent<AudioSource> ().Play ();
                    else
                        heavySwing2.GetComponent<AudioSource> ().Play ();
                }
            }
            */
        }
    }

}
