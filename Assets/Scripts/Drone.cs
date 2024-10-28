using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class Movement : MonoBehaviour
{

    public float moveDistance = 0.1f; // Distance to move upwards

    // Assign these in the Unity Inspector
    public Button forwardButton;
    public Button backwardButton;
    public Button leftButton;
    public Button rightButton;
    public Button upButton;
    public Button downButton;
    public Button onButton;
    public Button offButton;

    public Button respawnButton;
    public GameObject explosionPrefab; // Assign the explosion prefab in the inspector
    public Animator[] fanAnimators;  // Array of Animators for the fan animations

    private Vector3 startingPosition; // Variable to store the starting position

    private float right = 0.0f, up = 0.0f, forw = 0.0f;
    private float left = 0.0f, down = 0.0f, backw = 0.0f;


    private void Start()
    {
        // Stop the fan animations
        UpdateFanAnimation(false);

        // Store the starting position
        startingPosition = transform.position;

        SetButtonInteractable(false); // Start with direction buttons inactive
        offButton.interactable = false;

        Debug.Log("sstra"); // Log when movement starts
    }

    private void UpdateFanAnimation(bool state)
    {
        foreach (Animator animator in fanAnimators)
        {
            if (animator != null)
            {
                animator.enabled = state;

            }
        }
    }

    private void SetButtonInteractable(bool state)
    {
        forwardButton.interactable = state;
        backwardButton.interactable = state;
        leftButton.interactable = state;
        rightButton.interactable = state;
        upButton.interactable = state;
        downButton.interactable = state;
        respawnButton.interactable = state;
    }

    public void startMoveRight()
    {
        transform.position += Vector3.right * moveDistance;
        right += moveDistance;
    }

    public void startMoveLeft()
    {
        transform.position += Vector3.left * moveDistance;
        left += moveDistance;
    }

    public void startMoveForward()
    {
        transform.position += Vector3.forward * moveDistance;
        forw += moveDistance;
    }

    public void startMoveBackward()
    {
        transform.position += Vector3.back * moveDistance;
        backw += moveDistance;
    }

    public void startMoveUpward()
    {
        transform.position += Vector3.up * moveDistance;
        up += moveDistance;
    }

    public void startMoveDownward()
    {
        transform.position += Vector3.down * moveDistance;
        down += moveDistance;
    }

    public void onButtonClicked()
    {
        float dist = 0.3f;
        transform.position += Vector3.up * dist;
        up += dist;

        // Stop the fan animations
        UpdateFanAnimation(true);

        SetButtonInteractable(true); // Start with direction buttons active

        onButton.interactable = false;
        offButton.interactable = true;

    }

    public void offButtonClicked()
    {

        if (up > 0.0f)
        {
            transform.position += Vector3.down * up;
        }

        if(down > 0.0f)
        {
            transform.position += Vector3.up * down;
        }

        if(right > 0.0f)
        {
            transform.position += Vector3.left * right;
        }

        if (left > 0.0f)
        {
            transform.position += Vector3.right * left;
        }

        if (forw > 0.0f)
        {
            transform.position += Vector3.back * forw;
        }

        if (backw > 0.0f)
        {
            transform.position += Vector3.forward * backw;
        }


        up = 0.0f;
        right = 0.0f;
        forw = 0.0f;

        left = 0.0f;
        down = 0.0f;
        backw = 0.0f;

        SetButtonInteractable(false); // Start with direction buttons inactive
        UpdateFanAnimation(false); // Stop fan animations

        offButton.interactable = false;
        onButton.interactable = true;

    }


    private IEnumerator TriggerExplosion()
    {

        // Get the position of the drone
        Vector3 dronePosition = transform.position;

        // Instantiate the explosion at the drone's position
        GameObject explosion = Instantiate(explosionPrefab, dronePosition, Quaternion.identity);


        // Wait for respawn delay
        yield return new WaitForSeconds(1f);

        // Remove the explosion from the scene
        Destroy(explosion);


        //TurnOff();
        offButton.interactable = false;
        onButton.interactable = false;
        SetButtonInteractable(false);

        // Destroy the drone object
        Destroy(gameObject); 

    }

    private void TurnOff()
    {
        SetButtonInteractable(false); // Deactivate direction buttons
        UpdateFanAnimation(false); // Stop fan animations
    }


    public void OnDestroyButtonClicked()
    {
        StartCoroutine(TriggerExplosion());

    }
}
