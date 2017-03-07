using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpiderController : MonoBehaviour {

	public float movementSpeed;
	private bool canMove;
	private Rigidbody2D rbody;

	// Use this for initialization
	void Start () {
		rbody = GetComponent<Rigidbody2D> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (canMove) {
			rbody.velocity = new Vector3 (-movementSpeed, rbody.velocity.y, 0f);
		}
	}

	void OnBecameVisible() {
		canMove = true;
	}

	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag == "killZone") {
			gameObject.SetActive (false);
		}
	}

	void OnEnable() {
		canMove = false;
	}
}
