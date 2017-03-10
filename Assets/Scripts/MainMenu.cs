using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour {

	public string firstLevel;
	public string levelSelect;

	public void NewGame() {
		SceneManager.LoadSceneAsync (firstLevel);
	}

	public void Continue() {
		SceneManager.LoadSceneAsync (levelSelect);
	}
}
