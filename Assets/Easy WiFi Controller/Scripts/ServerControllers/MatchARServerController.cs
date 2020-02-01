using UnityEngine;
using System.Collections;
using EasyWiFi.Core;
using System;

namespace EasyWiFi.ServerControls
{

    [AddComponentMenu("EasyWiFiController/Server/UserControls/Match Position Orientation AR")]
    public class MatchARServerController : MonoBehaviour, IServerController
    {

        public string control = "AR";
        public EasyWiFiConstants.PLAYER_NUMBER player = EasyWiFiConstants.PLAYER_NUMBER.Player1;

        //runtime variables
        ARControllerType[] ar = new ARControllerType[EasyWiFiConstants.MAX_CONTROLLERS];
        int currentNumberControllers = 0;
        Vector3 recievedPos;


        void OnEnable()
        {
            EasyWiFiController.On_ConnectionsChanged += checkForNewConnections;

            //do one check at the beginning just in case we're being spawned after startup and after the callbacks
            //have already been called
            if (ar[0] == null && EasyWiFiController.lastConnectedPlayerNumber >= 0)
            {
                EasyWiFiUtilities.checkForClient(control, (int)player, ref ar, ref currentNumberControllers);
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
            for (int i = 0; i < currentNumberControllers; i++)
            {
                if (ar[i] != null && ar[i].serverKey != null && ar[i].logicalPlayerNumber != EasyWiFiConstants.PLAYERNUMBER_DISCONNECTED)
                {
                    print("Connected");
                    mapDataStructureToAction(i);
                }
            }
        }


        public void mapDataStructureToAction(int index)
        {
            recievedPos.x = 15*ar[index].POSITION_X-17;
            recievedPos.y = 15*ar[index].POSITION_Y-25;
            recievedPos.z = 15*ar[index].POSITION_Z-245;

            transform.position = recievedPos;

            print(recievedPos.x + " " + recievedPos.y + " " + recievedPos.z);
        }

        public void checkForNewConnections(bool isConnect, int playerNumber)
        {
            EasyWiFiUtilities.checkForClient(control, (int)player, ref ar, ref currentNumberControllers);
        }
    }

}