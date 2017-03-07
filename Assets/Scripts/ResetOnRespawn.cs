using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetOnRespawn : MonoBehaviour {

	private Vector3 startPosition;
	private Quaternion startRotation;
	private Vector3 startScale;

	private Rigidbody2D rbody;

	// Use this for initialization
	void Start () {
		startPosition = transform.position;
		startRotation = transform.rotation;
		startScale = transform.localScale;

		if (GetComponent<Rigidbody2D> () != null) {
			rbody = GetComponent<Rigidbody2D> ();
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void resetObject() {
		transform.position = startPosition;
		transform.rotation = startRotation;
		transform.localScale = startScale;

		if (rbody != null) {
			rbody.velocity = Vector3.zero;
		}
	}
}
