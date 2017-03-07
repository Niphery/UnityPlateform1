using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingObject : MonoBehaviour {

	public GameObject objectToMove;
	public Transform startPoint;
	public Transform endPoint;

	public float movementSpeed;

	private Vector3 currentDestination;

	// Use this for initialization
	void Start () {
		currentDestination = endPoint.position;
	}
	
	// Update is called once per frame
	void Update () {
		objectToMove.transform.position = Vector3.MoveTowards (objectToMove.transform.position, currentDestination, movementSpeed * Time.deltaTime);
		updateDestination ();
	}

	private void updateDestination() {
		if (objectToMove.transform.position == endPoint.position) {
			currentDestination = startPoint.position;
		} else if (objectToMove.transform.position == startPoint.position) {
			currentDestination = endPoint.position;
		}
	}
}
