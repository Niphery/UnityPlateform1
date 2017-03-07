using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class killZoneFollow : MonoBehaviour {

	public Transform player;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		transform.position = new Vector2 (player.position.x, transform.position.y);
	}
}
