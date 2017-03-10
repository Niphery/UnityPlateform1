using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelEnd : MonoBehaviour {

	private LevelManager levelManager;
	public string levelToLoad = "Scene1";

	// Use this for initialization
	void Start () {
		levelManager = FindObjectOfType<LevelManager> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag == "Player") {
			levelManager.startChangeLevel (levelToLoad);
			PlayerPrefs.SetInt (levelToLoad, 1);
			levelManager.player.isInvicible = true;
		}
	}
}
