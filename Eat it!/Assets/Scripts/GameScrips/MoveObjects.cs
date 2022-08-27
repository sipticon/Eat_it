using UnityEngine;
public class MoveObjects : MonoBehaviour
{
    [SerializeField] private float movementSpeed = 10f;
    private Rigidbody objectRigidbody;

    private void Start()
    {
        objectRigidbody = GetComponent<Rigidbody>();
    }

    private void FixedUpdate()
    {
        objectRigidbody.MovePosition(transform.position + (-transform.forward * Time.deltaTime * movementSpeed));
    }
}