using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelManager : MonoBehaviour {

	// Player
	public float respawnTime = 0;
	public PlayerMovement player;
	public GameObject deathExplosion;
	public float hurtDelay = 2;

	// Coins System
	public int score = 0;
	private CoinScript[] coins;
	private int totalCoins;

	// UI
	public Text scoreText;

	public Image heart1;
	public Image heart2;
	public Image heart3;

	public Sprite heartFull;
	public Sprite heartHalf;
	public Sprite heartEmpty;

	// Life
	public int maxLife = 6;
	private int currentLife;
	private bool isHurting = false;
	private bool isRespawning = false;

	// LifeCycle
	private ResetOnRespawn[] objectsToReset;


	// Use this for initialization
	void Start () {
		player = FindObjectOfType<PlayerMovement> ();
		updateScore ();
		currentLife = maxLife;
		updateLife ();
		objectsToReset = FindObjectsOfType<ResetOnRespawn> ();
	}
	
	// Update is called once per frame
	void Update () {
		respawnPlayer ();
		hurtPlayer ();
	}

	void respawnPlayer() {
		if (player.isDead || currentLife <= 0) {
			if (!isRespawning) {
				Debug.Log ("LvM Respawn" + currentLife);
				player.isDead = true;
				currentLife = 0;
				updateLife ();
				StartCoroutine ("respawnCo");
				isRespawning = true;
			}
		}
	}

	void hurtPlayer() {
		if (player.isHurting && !player.isDead && !player.isInvicible) {
			Debug.Log ("Player took damage" + currentLife);
			if (!isHurting) {
				StartCoroutine ("hurtPlayerCo");
				player.knockBack ();
				isHurting = true;
			}
		}
	}

	IEnumerator respawnCo() {
		Debug.Log ("LvM RespawnCo");
		Instantiate (deathExplosion, player.transform.position, player.transform.rotation);
		player.gameObject.SetActive (false);
		score = 0;
		updateScore();
		yield return new WaitForSeconds (respawnTime);
		currentLife = maxLife;

		updateLife ();
		player.gameObject.SetActive (true);
		player.respawn ();
		isRespawning = false;
		reactiveObjects ();
	}

	IEnumerator hurtPlayerCo() {
		Debug.Log ("LvM Respawn");
		currentLife -= 1;
		updateLife ();
		yield return new WaitForSeconds (hurtDelay);
		isHurting = false;
	}

	public void addCoins(int value) {
		Debug.Log ("Player picked up a coin");
		score += value;
		updateScore ();
	}

	private void updateScore() {
		scoreText.text = "Score: " + score;
	}

	private void updateLife() {
		switch (currentLife) {
		case 0:
			heart1.sprite = heartEmpty;
			heart2.sprite = heartEmpty;
			heart3.sprite = heartEmpty;
			return;
		case 1:
			heart1.sprite = heartHalf;
			heart2.sprite = heartEmpty;
			heart3.sprite = heartEmpty;
			return;
		case 2:
			heart1.sprite = heartFull;
			heart2.sprite = heartEmpty;
			heart3.sprite = heartEmpty;
			return;
		case 3:
			heart1.sprite = heartFull;
			heart2.sprite = heartHalf;
			heart3.sprite = heartEmpty;
			return;
		case 4:
			heart1.sprite = heartFull;
			heart2.sprite = heartFull;
			heart3.sprite = heartEmpty;
			return;
		case 5:
			heart1.sprite = heartFull;
			heart2.sprite = heartFull;
			heart3.sprite = heartHalf;
			return;
		case 6:
			heart1.sprite = heartFull;
			heart2.sprite = heartFull;
			heart3.sprite = heartFull;
			return;
		}
	}

	private void reactiveObjects() {
		for (int i = 0; i < objectsToReset.Length; i++) {
			
			objectsToReset [i].gameObject.SetActive (true);
			objectsToReset [i].resetObject ();
		}
	}
}
