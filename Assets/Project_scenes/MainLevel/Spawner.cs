using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{
    public GameObject cube;
    public float spawnWait;
    public float spawnMostWait;
    public float spawnLeastWait;
    public int startWait;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(waitSpawner());
    }

    // Update is called once per frame
    void Update()
    {
        spawnWait = Random.Range(spawnLeastWait, spawnMostWait);
        
    }

    IEnumerator waitSpawner()
    { 
        yield return new WaitForSeconds(startWait);
        while (true)
        {
            Instantiate(cube, transform.position, transform.rotation);

            yield return new WaitForSeconds(spawnWait);
        }
    }
}
