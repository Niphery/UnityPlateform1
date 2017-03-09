using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fading : MonoBehaviour {

	public Texture2D fadeOutTexture;
	public float fadeSpeed = 0.8f;
	private int drawDepth = -1000;
	private float alpha = 1f;
	private int fadeDir = -1; // the direction to fade: in = -1 or out = 1 

	void OnGUI() {
		// fade out/in the alpha value using a direction, a speed and time to convert the operation to seconds
		alpha += fadeDir * fadeSpeed * Time.deltaTime;
		//force clamp the number between 0 and 1 because gui.color use alpha value between 0 and 1
		alpha = Mathf.Clamp01(alpha);

		// set color of our GUI (in this case our texture). All color value remain the same and the alpha is set to the alpha var
		GUI.color = new Color(GUI.color.r, GUI.color.g, GUI.color.b, alpha);
		GUI.depth = drawDepth;
		GUI.DrawTexture (new Rect (0, 0, Screen.width, Screen.height), fadeOutTexture);
	}

	public float BeginFade (int direction) {
		fadeDir = direction;
		return (fadeSpeed);
	}

	void OnLevelFinishedLoading() {
		BeginFade (-1);
	}
}
