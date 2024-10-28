using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeControl : MonoBehaviour
{
    string cubeName;
    public GameObject explosionPrefab;
    int i = 0;


    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            RaycastHit Hit;

            if(Physics.Raycast(ray,out Hit))
            {
             
                switch (cubeName)
                {
                    case "Cube1":

                        // Changing the cube's color
                        if(i == 0)
                        {
                            // Set color to orange
                            Hit.transform.GetComponent<Renderer>().material.color = new Color(1f, 0.5f, 0f);
                            i = 1;
                        }

                        else
                        {
                            // Set color to pink
                            Hit.transform.GetComponent<Renderer>().material.color = new Color(1f, 0.75f, 0.8f); 
                            i = 0;
                        }

                        break;

                    case "Cube2":
                        // Move forward
                        Hit.transform.position += Hit.transform.forward * (0.1f);
                        break;

                    case "Cube3":

                        // Detonate the cube
                    
                        // Get the position of the cube
                        Vector3 cubePosition = Hit.transform.position;

                        // Instantiate the explosion at the cube's position
                        GameObject explosion = Instantiate(explosionPrefab, cubePosition, Quaternion.identity);

                        // Remove the explosion from the scene
                        Destroy(explosion);

                        // Destroy the cube object
                        Destroy(Hit.transform.gameObject);
                        break;



                }

            }

        }
        
    }
}
