using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelDoor : MonoBehaviour {

	private LevelManager levelManager;
	public string levelToLoad = "Scene1";

	// Use this for initialization
	void Start () {
		levelManager = FindObjectOfType<LevelManager> ();
	}


	void OnTriggerStay2D(Collider2D other) {
		if (other.tag == "Player" && Input.GetButtonDown ("Jump")) {
			levelManager.startChangeLevel (levelToLoad);
			levelManager.player.isInvicible = true;
		}
	}
}
