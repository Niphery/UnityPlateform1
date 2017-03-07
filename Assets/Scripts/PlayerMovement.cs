using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerMovement : MonoBehaviour {

	Rigidbody2D rbody;
	Animator anim;
	string sceneName;

	public float movementSpeed = 3f;
	public float jumpPower = 3f;

	public Transform groundChecker;
	public float groundCheckRadius = 0.25f;
	public LayerMask whatIsGround;

	public bool isGrounded;
	public bool isDoubleJumping = false;
	public bool isDead = false;
	public bool isHurting = false;

	Vector3 respawnPosition;
	Vector3 originalPosition;

	public GameObject stompBox;
	public float knockBackForce;
	public float knockBackLenght;
	private float knockBackCounter;
	public bool isInvicible;
	public float invincibilityLenght;
	private float invincibilityCounter;

	// Use this for initialization
	void Start () {
		rbody = GetComponent<Rigidbody2D> ();
		anim = GetComponent<Animator> ();
		sceneName = UnityEditor.SceneManagement.EditorSceneManager.GetActiveScene().name;
		originalPosition = transform.position;
		respawnPosition = new Vector3 (0, 0, 0);
	}
	
	// Update is called once per frame
	void Update () {
		updateJumpStatus ();
		selectControlSystem ();
		updateAnimationStates ();
		updateStompBox ();
	}

	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag == "killZone") {
			isDead = true;
		}

		if (other.tag == "Checkpoint") {
			respawnPosition = other.transform.position + new Vector3 (0, 2, 0);
		}
	}


	// MARK: Methods

	void updateJumpStatus() {
		isGrounded = Physics2D.OverlapCircle (groundChecker.position, groundCheckRadius, whatIsGround);

		if (isGrounded) {
			isDoubleJumping = false;
		}
	}

	void selectControlSystem() {
		if (sceneName == "Scene1") {

			if (knockBackCounter <= 0) {
				// Horizontal movement
				rbody.velocity = new Vector3 (movementSpeed * Input.GetAxisRaw ("Horizontal"), rbody.velocity.y, 0f);
				if (Input.GetAxisRaw ("Horizontal") > 0f) {
					transform.localScale = new Vector3 (1f, 1f, 1f);
				} else if (Input.GetAxisRaw ("Horizontal") < 0f) {
					transform.localScale = new Vector3 (-1f, 1f, 1f);
				}
				


				// Jumping
				if (Input.GetButtonDown ("Jump") && (isGrounded || !isDoubleJumping)) {
					if (!isGrounded) {
						isDoubleJumping = true;
					}

					rbody.velocity = new Vector3 (rbody.velocity.x, jumpPower, 0f);
				}
			} else {
				knockBackCounter -= Time.deltaTime;
				if (transform.localScale.x > 0) {
					rbody.velocity = new Vector3 (-knockBackForce, knockBackForce, 0f);
				} else {
					rbody.velocity = new Vector3 (knockBackForce, knockBackForce, 0f);
				}
			}

			if (invincibilityCounter <= 0) {
				isInvicible = false;
			} else {
				isInvicible = true;
				invincibilityCounter -= Time.deltaTime;
			}
		} else {
			// RPG Style with 3D Style control
			Vector2 movementVector = new Vector2 (Input.GetAxisRaw ("Horizontal"), Input.GetAxisRaw ("Vertical"));

			//		if (movementVector != Vector2.zero) {
			//			anim.SetBool ("isWalking", true);
			//			anim.SetFloat ("inputX", movementVector.x);
			//			anim.SetFloat ("inputY", movementVector.y);
			//		} else {
			//			anim.SetBool ("isWalking", false);
			//		}

			rbody.MovePosition (rbody.position + movementVector * Time.deltaTime * movementSpeed);

		}
	}

	void updateAnimationStates() {
		anim.SetBool ("isGrounded", isGrounded);
		anim.SetFloat ("inputX", Mathf.Abs (rbody.velocity.x));
	}



	public void respawn() {
		Debug.Log ("Respawning Player");
		if (respawnPosition != Vector3.zero) {
			transform.position = respawnPosition;
		} else {
			transform.position = originalPosition;
		}
		isDead = false;
		isHurting = false;
	}
		
	void updateStompBox() {
		if (rbody.velocity.y < 0) {
			stompBox.SetActive (true);
		} else {
			stompBox.SetActive (false);
		}
	}

	public void knockBack() {
		knockBackCounter = knockBackLenght;
		invincibilityCounter = invincibilityLenght;
	}
}
