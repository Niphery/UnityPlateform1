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
	public Text livesCount;
	public GameObject gameOverScreen;

	public Image heart1;
	public Image heart2;
	public Image heart3;

	public Sprite heartFull;
	public Sprite heartHalf;
	public Sprite heartEmpty;

	// Life
	public int maxHealth = 6;
	private int currentHealth;
	private bool isHurting = false;
	private bool isRespawning = false;

	// Lives
	private int currentLives;
	public int startingLives = 3;
	public int coinsToLife = 100;


	// LifeCycle
	private ResetOnRespawn[] objectsToReset;


	// Use this for initialization
	void Start () {
		player = FindObjectOfType<PlayerMovement> ();
		updateScore ();
		currentHealth = maxHealth;
		currentLives = startingLives;
		updateLife ();
		updateLives ();
		objectsToReset = FindObjectsOfType<ResetOnRespawn> ();
	}
	
	// Update is called once per frame
	void Update () {
		respawnPlayer ();
		hurtPlayer ();
	}

	void respawnPlayer() {
		if (player.isDead || currentHealth <= 0) {
			if (!isRespawning) {
				Debug.Log ("LvM Respawn" + currentHealth);
				player.isDead = true;
				currentHealth = 0;
				updateLife ();
				currentLives -= 1;
				updateLives ();
				if (currentHealth >= 0) {
					StartCoroutine ("respawnCo");
					isRespawning = true;
				} else {
					player.gameObject.SetActive (false);
					gameOverScreen.SetActive (true);
				}

			}
		}
	}

	void hurtPlayer() {
		if (player.isHurting && !player.isDead && !player.isInvicible) {
			Debug.Log ("Player took damage" + currentHealth);
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
		currentHealth = maxHealth;
		updateLife ();
		player.gameObject.SetActive (true);
		player.respawn ();
		isRespawning = false;
		reactiveObjects ();
	}

	IEnumerator hurtPlayerCo() {
		Debug.Log ("LvM Respawn");
		currentHealth -= 1;
		updateLife ();
		yield return new WaitForSeconds (hurtDelay);
		isHurting = false;
	}

	public void addCoins(int value) {
		Debug.Log ("Player picked up a coin");
		score += value;
		updateScore ();

		if (score % coinsToLife == 0) {
			currentLives += 1;
			updateLives ();
		}
	}

	private void updateScore() {
		scoreText.text = "Score: " + score;
	}

	private void updateLife() {
		switch (currentHealth) {
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

	private void updateLives() {
		livesCount.text = "x" + currentLives;
	}

	public void addLives(int value) {
		currentLives += value;
		updateLives ();
	}

	public void addHealth(int value) {
		if (currentHealth < maxHealth) {
			currentHealth += value;
			if (currentHealth > maxHealth) {
				currentHealth = maxHealth;
			}
			updateLife ();
		}
	}
}
