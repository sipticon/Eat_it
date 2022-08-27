using System.Collections;
using UnityEngine;

public class SpawnObjects : MonoBehaviour
{
    [SerializeField] private GameObject[] objectsToSpawn;
    private float timeToSpawn, spawnPosition;
    private void Start()
    {
        StartCoroutine(spawnObjects());
    }
    
    IEnumerator spawnObjects()
    {
        while (true)
        {
            timeToSpawn = Random.Range(1f, 5f);
            spawnPosition = Random.Range(-1f, 1f);
            Vector3 spawnPos = new Vector3(transform.position.x + spawnPosition, transform.position.y, transform.position.z);
            GameObject spawningObject = Instantiate(objectsToSpawn[Random.Range(0, objectsToSpawn.Length)], spawnPos, Quaternion.identity);
            yield return new WaitForSeconds(timeToSpawn);
        }
    }
}