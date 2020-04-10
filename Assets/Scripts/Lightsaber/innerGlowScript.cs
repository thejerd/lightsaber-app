using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EasyWiFi.Core;

public class innerGlowScript : MonoBehaviour {
	LineRenderer lineRend;
	public Transform startPos;
	public Transform endPos;
	private float textureOffset = 0f;
	private bool on = true;
	private bool stillPressedFromLastFire = false;
	private Vector3 endPosExtendedPos;


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
			}
			else{
				print("open");
				on=true;
			}
			stillPressedFromLastFire = true;
		}

		if (!button.BUTTON_STATE_IS_PRESSED){
			stillPressedFromLastFire = false;
		}
	}
}
