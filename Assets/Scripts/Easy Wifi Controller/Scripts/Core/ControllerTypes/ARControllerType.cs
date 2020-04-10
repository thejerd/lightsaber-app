using UnityEngine;
using System;
using System.Collections;

//Here we define the structure of the controller types "over the wire" or in another words the network representation of all
namespace EasyWiFi.Core
{
    public class ARControllerType : BaseControllerType
    {
        //Arkit data is composed of the client transform's position data and rotation data
        public float POSITION_X;
        public float POSITION_Y;
        public float POSITION_Z;

        public float ROTATION_X;
        public float ROTATION_Y;
        public float ROTATION_Z;


        public override void mapNetworkDataToStructure(int packetNumber, string line)
        {
            string[] comma = new String[] { EasyWiFiConstants.SPLITMESSAGE_COMMA };

            //if we've received a packet on connection we thought was disconnected take action
            if (logicalPlayerNumber == EasyWiFiConstants.PLAYERNUMBER_DISCONNECTED)
            {
                reuseOrGetAnotherConnection(previousConnectionPlayerNumber);
            }

            //remember when receiving the data the serverkey has already been parsed out to get the right
            //server instance in the data structure so we're left with datapoint,datapoint,datapoint...etc.
            if (isNewPacket(packetNumber))
            {
                lastPacketNumber = packetNumber;
                string[] splitMessage;

                if (line != null && !line.Equals(string.Empty))
                {
                    splitMessage = line.Split(comma, StringSplitOptions.RemoveEmptyEntries);
                    if (splitMessage.Length > 2)
                    {
                        POSITION_X = (float) Convert.ToDecimal(splitMessage[0]);
                        POSITION_Y = (float) Convert.ToDecimal(splitMessage[1]);
                        POSITION_Z = (float) Convert.ToDecimal(splitMessage[2]);

                        ROTATION_X = (float) Convert.ToDecimal(splitMessage[3]);
                        ROTATION_Y = (float) Convert.ToDecimal(splitMessage[4]);
                        ROTATION_Z = (float) Convert.ToDecimal(splitMessage[5]);
                    }
                }
            }


        }

        public override string mapStructureToNetworkData()
        {
            string message = "";

            //double and float if converted straight to string can have e notation in it which causes issues on when trying
            //to convert on the the other end so decimal is used "over the wire"
            message += Convert.ToDecimal(POSITION_X).ToString() + EasyWiFiConstants.SPLITMESSAGE_COMMA;
            message += Convert.ToDecimal(POSITION_Y).ToString() + EasyWiFiConstants.SPLITMESSAGE_COMMA;
            message += Convert.ToDecimal(POSITION_Z).ToString() + EasyWiFiConstants.SPLITMESSAGE_COMMA;
            
            message += Convert.ToDecimal(ROTATION_X).ToString() + EasyWiFiConstants.SPLITMESSAGE_COMMA;
            message += Convert.ToDecimal(ROTATION_Y).ToString() + EasyWiFiConstants.SPLITMESSAGE_COMMA;
            message += Convert.ToDecimal(ROTATION_Z).ToString() + EasyWiFiConstants.SPLITMESSAGE_NEWLINE;

            return message;

        }


    }

}