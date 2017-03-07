using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour {

	public Transform target;
	private Camera myCam;
	public float movementSpeed = 0.1f;
	public float followAhead = 0.2f;

	// Use this for initialization
	void Start () {
		myCam = GetComponent<Camera> ();
	}
	
	// Update is called once per frame
	void Update () {
		myCam.orthographicSize = (Screen.height / 100f);
		if (target.transform.localScale.x > 0f) {
			// add a new vector in order to not have the camera follow the z position of the player
			transform.position = Vector3.Lerp (transform.position, target.position, movementSpeed) + new Vector3 (0 + followAhead, 0, -10);
		} else {
			transform.position = Vector3.Lerp (transform.position, target.position, movementSpeed) + new Vector3 (0 - followAhead, 0, -10);
		}
	}
}
