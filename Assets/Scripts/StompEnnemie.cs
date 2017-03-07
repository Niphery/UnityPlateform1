using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StompEnnemie : MonoBehaviour {

	public GameObject deathExplosion;
	private Rigidbody2D playerRBdoy;

	public float bouceForce;

	// Use this for initialization
	void Start () {
		playerRBdoy = transform.parent.GetComponent<Rigidbody2D> (); // GetComponentInParent<Rigidbody2D> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag == "Ennemy") {
			Instantiate (deathExplosion, other.transform.position, other.transform.rotation);
			other.gameObject.SetActive (false);
			playerRBdoy.velocity = new Vector3 (playerRBdoy.velocity.x, playerRBdoy.velocity.y + bouceForce, 0f);
		}
	}
}
