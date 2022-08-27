using UnityEngine;
public class DeleteObject : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if(!other.CompareTag("Player"))
            Destroy(other.gameObject);
    }
}