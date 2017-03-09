using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour {

	// Player
	public float respawnTime = 0;
	public PlayerMovement player;
	public GameObject deathExplosion;
	public float hurtDelay = 2;

	// Coins System
	private int score;
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

	// Sounds
	public AudioSource coinPickupSound;
	public AudioSource mainSoundTrack;
	public AudioSource gameOverSound;


	//Ending Level
	private Fading fading;
	private string levelToLoad;

	// Use this for initialization
	void Start () {
		player = FindObjectOfType<PlayerMovement> ();
		fading = GetComponent<Fading> ();
		objectsToReset = FindObjectsOfType<ResetOnRespawn> ();
		initKeyValues ();
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
					gameOver ();
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
				player.hurtSound.Play ();
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
		coinPickupSound.Play ();
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
		coinPickupSound.Play ();
		updateLives ();
	}

	public void addHealth(int value) {
		coinPickupSound.Play ();
		if (currentHealth < maxHealth) {
			currentHealth += value;
			if (currentHealth > maxHealth) {
				currentHealth = maxHealth;
			}
			updateLife ();
		}
	}

	private void gameOver() {
		player.gameObject.SetActive (false);
		gameOverScreen.SetActive (true);
		mainSoundTrack.Stop ();
		gameOverSound.Play ();
	}

	public void startChangeLevel(string value) {
		levelToLoad = value;
		StartCoroutine ("changeLevelCo");
	}


	IEnumerator changeLevelCo() {
		yield return new WaitForSeconds (0.6f);

		float fadeTime = fading.BeginFade (1);
		PlayerPrefs.SetInt ("scoreKey", score);
		PlayerPrefs.SetInt ("livesKey", currentLives);
		PlayerPrefs.SetInt ("healthKey", currentHealth);

		yield return new WaitForSeconds (fadeTime);
		SceneManager.LoadSceneAsync (levelToLoad);
	}

	private void initKeyValues() {
		if (PlayerPrefs.HasKey ("scoreKey")) {
			score = PlayerPrefs.GetInt ("scoreKey");
		} else {
			score = 0;
		}

		if (PlayerPrefs.HasKey ("healthKey")) {
			currentHealth = PlayerPrefs.GetInt ("healthKey");
		} else {
			currentHealth = maxHealth;
		}

		if (PlayerPrefs.HasKey ("livesKey")) {
			currentLives = PlayerPrefs.GetInt ("livesKey");
		} else {
			currentLives = startingLives;
		}

		updateScore ();
		updateLife ();
		updateLives ();
	}
}
