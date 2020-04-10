using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

using static saber_color;

public class CustomizationMenu : MonoBehaviour
{
    public void colorNext() {
        saber_color.nextColor();
    }

    public void colorPrev() {
        saber_color.prevColor();
    }

    public void quitGame() {
        Application.Quit();
        //debug.log("Quit");
    }
}