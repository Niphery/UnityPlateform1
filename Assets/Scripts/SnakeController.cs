using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnakeController : MonoBehaviour {

	public Transform leftPoint;
	public Transform rightPoint;

	public float movementSpeed;
	public bool isMovingRight;

	private Rigidbody2D rbody;
	private bool canMove;

	// Use this for initialization
	void Start () {
		rbody = GetComponent<Rigidbody2D> ();		
	}
	
	// Update is called once per frame
	void Update () {
		if (canMove) {
			if (isMovingRight && transform.position.x > rightPoint.position.x) {
				isMovingRight = false;
			} else if (!isMovingRight && transform.position.x < leftPoint.position.x) {
				isMovingRight = true;
			}

			if (isMovingRight) {
				rbody.velocity = new Vector3 (movementSpeed, rbody.velocity.y, 0f);
			} else {
				rbody.velocity = new Vector3 (-movementSpeed, rbody.velocity.y, 0f);
			}
		}
	}

	void OnBecameVisible() {
		canMove = true;
	}
}
