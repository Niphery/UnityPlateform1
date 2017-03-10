using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LevelDoor : MonoBehaviour {

	private LevelManager levelManager;
	public string levelToLoad = "Scene1";
	public bool isUnlocked = false;

	public Sprite doorBottomOpen;
	public Sprite doorTopOpen;
	public Sprite doorBottomClosed;
	public Sprite doorTopClosed;

	public SpriteRenderer doorTop;
	public SpriteRenderer doorBottom;

	public Text levelLabel;
	public string levelName;

	// Use this for initialization
	void Start () {
		levelManager = FindObjectOfType<LevelManager> ();
		levelLabel.text = levelName;

		PlayerPrefs.SetInt("Scene1", 1);

		if (PlayerPrefs.GetInt (levelToLoad) == 1) {
			isUnlocked = true;
		} else {
			isUnlocked = false;
		}


		if (isUnlocked) {
			doorTop.sprite = doorTopOpen;
			doorBottom.sprite = doorBottomOpen;
		} else {
			doorTop.sprite = doorTopClosed;
			doorBottom.sprite = doorBottomClosed;
		}
	}


	void OnTriggerStay2D(Collider2D other) {
		if (other.tag == "Player" && Input.GetButtonDown ("Jump") && isUnlocked) {
			levelManager.startChangeLevel (levelToLoad);
			levelManager.player.isInvicible = true;
		}
	}
}
