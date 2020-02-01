using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EasyWiFi.Core;

public class kyloLightsaber : MonoBehaviour {
	LineRenderer lineRend;
	public Transform startPos;
	public Transform endPos;
	private float textureOffset = 0f;
	private bool on = true;
	private bool stillPressedFromLastFire = false;
	private Vector3 endPosExtendedPos;
	public Transform saberOn; // object containing audio component
	public Transform saberOff;
	public Transform saberHum;
	public Light saberPointLight;

	// Use this for initialization
	void Start () {
		lineRend = GetComponent<LineRenderer>();
		endPosExtendedPos = endPos.localPosition;
	}

	// Update is called once per frame
	void Update () {

		//extend
		if(on){
			endPos.localPosition = Vector3.Lerp(endPos.localPosition,endPosExtendedPos, Time.deltaTime*5f);

		}
		// retract line
		else{
			endPos.localPosition = Vector3.Lerp(endPos.localPosition,startPos.localPosition, Time.deltaTime*5f);
		}

		// update line position
		lineRend.SetPosition(0,startPos.position);
		lineRend.SetPosition(1,endPos.position);

		//pan texture
		textureOffset  -= Time.deltaTime*1.3f;
		if (textureOffset < -10f){
			textureOffset += 10f;
		}
		lineRend.sharedMaterials[1].SetTextureOffset("_MainTex", new Vector2(textureOffset,0f));

		// Align point light with saber
	}

	void openCloseSaber(ButtonControllerType button){

		if(button.BUTTON_STATE_IS_PRESSED && stillPressedFromLastFire == false){
			if(on){
				print("close");
				on=false;
				StartCoroutine(DelayLightOff(.6f));
				saberOff.GetComponent<AudioSource>().Play();
				saberHum.GetComponent<AudioSource>().Stop(); // end saber hum
			}
			else{
				print("open");
				on=true;
				saberPointLight.intensity = 1;
				saberHum.GetComponent<AudioSource>().Play(); // start looping saber hum  
				saberOn.GetComponent<AudioSource>().Play();
			}
			stillPressedFromLastFire = true;
		}

		if (!button.BUTTON_STATE_IS_PRESSED){
			stillPressedFromLastFire = false;
		}
	}

	IEnumerator DelayLightOff(float time)
	{
		yield return new WaitForSeconds(time);

		// Code to execute after the delay
		saberPointLight.intensity = 0;
	}

}
