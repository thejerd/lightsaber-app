using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public void playGame() {
        SceneManager.LoadScene("MainLevel");
    }

    public void training() {
        SceneManager.LoadScene("Training");
    }

    public void quitGame() {
        Application.Quit();
        //debug.log("Quit");
    }
}
