using UnityEngine;
using System.Collections;
using EasyWiFi.Core;
using System;

namespace EasyWiFi.ServerControls
{

    //[AddComponentMenu("EasyWiFiController/Server/UserControls/Custom Accelerometer")]
    public class sensors_server : MonoBehaviour, IServerController
    {

        public string control = "Sensor";
        public EasyWiFiConstants.PLAYER_NUMBER player = EasyWiFiConstants.PLAYER_NUMBER.Player1;


        //runtime variables
        sensor_controller_type[] sensor = new sensor_controller_type[EasyWiFiConstants.MAX_CONTROLLERS];
        int currentNumberControllers = 0;


        void OnEnable()
        {
            EasyWiFiController.On_ConnectionsChanged += checkForNewConnections;

            //do one check at the beginning just in case we're being spawned after startup and after the callbacks
            //have already been called
            if (sensor[0] == null && EasyWiFiController.lastConnectedPlayerNumber >= 0)
            {
                EasyWiFiUtilities.checkForClient(control, (int)player, ref sensor, ref currentNumberControllers);
            }
        }

        void OnDestroy()
        {
            EasyWiFiController.On_ConnectionsChanged -= checkForNewConnections;
        }

        // Update is called once per frame
        void Update()
        {
            //iterate over the current number of connected controllers
            print("yo");
            for (int i = 0; i < currentNumberControllers; i++)
            {
                if (sensor[i] != null && sensor[i].serverKey != null && sensor[i].logicalPlayerNumber != EasyWiFiConstants.PLAYERNUMBER_DISCONNECTED)
                {
                    mapDataStructureToAction(i);
                }
            }
        }


        public void mapDataStructureToAction(int index)
        {
            //DO STUFF HERE
            print("HERE");
            print(
                sensor[index].GYRO_W + ", " + 
                sensor[index].GYRO_X + ", " + 
                sensor[index].GYRO_Y + ", " + 
                sensor[index].GYRO_Z + ", " + 
                sensor[index].GRAVITY_X + ", " + 
                sensor[index].GRAVITY_Y + ", " + 
                sensor[index].GRAVITY_Z + ", " + 
                sensor[index].ACCELERATION_X + ", " + 
                sensor[index].ACCELERATION_Y + ", " + 
                sensor[index].ACCELERATION_Z + ", " 
                );
        }

        public void checkForNewConnections(bool isConnect, int playerNumber)
        {
            EasyWiFiUtilities.checkForClient(control, (int)player, ref sensor, ref currentNumberControllers);
        }
    }

}
