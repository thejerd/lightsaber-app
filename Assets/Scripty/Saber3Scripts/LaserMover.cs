using UnityEngine;
using System.Collections;
using System.Collections.Generic;

     public class LaserMover : MonoBehaviour {

       public GameObject saber;
       public float mSpeed=125.0f;
       public float oldSpeed=-10.0f;
       public int maxReflectionCount = 5;
       public float maxStepDistance = 200;
       public Vector3 reflectedV=Vector3.zero;
       public Vector3 normalCollision = Vector3.zero;

        Vector3 myPrevPos;
         // Use this for initialization
         void Start () {
           myPrevPos= transform.position;
         }

         // Update is called once per frame
         void Update () {

           myPrevPos=transform.position;

           transform.Translate(0.0f ,0.0f , mSpeed*Time.deltaTime);



         }

        /* void OnTriggerEnter(Collider other){
           Debug.Log(other.gameObject.name);

           if(other.gameObject.name=="New Kylo"){
               mSpeed=-mSpeed;
           }
           else if(other.gameObject.name=="Plane"){

                //DrawPredictedReflectionPattern(this.transform.position + this.transform.forward * 0.75f, this.transform.forward, maxReflectionCount);
                //Instantiate(prefab, other.gameObject.transform.position, 90);
                //GetComponent(MeshRenderer).enabled = false;
                //Instantiate(saber, myPrevPos, Quaternion.identity);
                oldSpeed=-mSpeed;
                mSpeed=0;
                myPrevPos= transform.position;
                reflectedV= Vector3.Reflect(myPrevPos, Vector3.up);
                transform.LookAt(reflectedV);
                mSpeed=oldSpeed;




               //mSpeed=-mSpeed;
           }
           else{
             mSpeed=0;
           }
           //mspeed=-mspeed;
         }*/
         void OnCollisionEnter(Collision other){
            Debug.Log(other.gameObject.name);

            if(other.gameObject.name=="New Kylo"){
                mSpeed=-mSpeed;
            }
            else if(other.gameObject.name=="Plane"){

              print("Points colliding: " + other.contacts.Length);
              print("First normal of the point that collide: " + other.contacts[0].normal);
              normalCollision= other.contacts[0].normal;
              print("Normal Coll:: "+ normalCollision);

              oldSpeed=-mSpeed;
              mSpeed=0;

              myPrevPos= transform.position;

              //transform.LookAt(Vector3.Reflect(myPrevPos, Vector3.up));
              transform.Rotate(0,180,0,Space.World);


              //transform.LookAt(reflectedV);
              mSpeed=oldSpeed;




            }
            else{
              mSpeed=0;
            }
            //mspeed=-mspeed;
          }

         /*private void DrawPredictedReflectionPattern(Vector3 position, Vector3 direction, int reflectionsRemaining){
           if (reflectionsRemaining == 0) {
               return;
           }

           Vector3 startingPosition = position;

           Ray ray = new Ray(position, direction);
           RaycastHit hit;
           if (Physics.Raycast(ray, out hit, maxStepDistance))
           {
               direction = Vector3.Reflect(direction, hit.normal);
               position = hit.point;
           }
           else
           {
               position += direction * maxStepDistance;
           }

          // Gizmos.color = Color.yellow;
          // Gizmos.DrawLine(startingPosition, position);

          // DrawPredictedReflectionPattern(position, direction, reflectionsRemaining - 1);
         }*/

     }
