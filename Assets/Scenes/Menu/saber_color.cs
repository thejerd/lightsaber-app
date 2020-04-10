using System.Collections;
using System.Collections.Generic;
//using UnityEngine.CoreModule;
using UnityEngine;

//add a vector than contains all possible colors

public static class saber_color
{
    public static Color saberColor = Color.blue;
    private static int currentIndex = 0;

    public static Color[] colorOptions = {Color.blue, Color.green, Color.red, new Color(1.0f, 0.502f, 0.0f), Color.yellow, new Color(0.7f, 0.0f, 0.7f), Color.white};

    public static Color saberColorNext = Color.green;
    public static Color saberColorPrev = Color.white;
  

    public static void nextColor(){
        if (currentIndex == colorOptions.Length - 1)
            currentIndex = 0;
        else 
            currentIndex++;

        saberColor = colorOptions[currentIndex];

        nextOption();
        prevOption();
    }

    public static void prevColor(){
        if (currentIndex == 0)
            currentIndex = colorOptions.Length - 1;
        else 
            currentIndex--;

        saberColor = colorOptions[currentIndex];

        nextOption();
        prevOption();
    }

    public static void nextOption(){
        int nextIndex = currentIndex;

        if (nextIndex == colorOptions.Length - 1)
            nextIndex = 0;
        else 
            nextIndex++;

        saberColorNext = colorOptions[nextIndex];
    }

    public static void prevOption(){
        int prevIndex = currentIndex;

        if (prevIndex == 0)
            prevIndex = colorOptions.Length - 1;
        else 
            prevIndex--;

        saberColorPrev = colorOptions[prevIndex];
    }
    
}
