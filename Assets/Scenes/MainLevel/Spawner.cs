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
    public static int cubeCount=0;
    public GameObject platformR;

    // Start is called before the first frame update
    void Start()
    {
        //StartCoroutine(waitSpawner());
        InvokeRepeating("spawnCube", startWait, spawnWait);
    }

    // Update is called once per frame
    void Update()
    {
        //spawnWait = Random.Range(spawnLeastWait, spawnMostWait);

    }

    IEnumerator waitSpawner()
    {
        yield return new WaitForSeconds(startWait);
        while (true)
        {
            Instantiate(cube, transform.position, transform.rotation);
            cubeCount+=1;

            yield return new WaitForSeconds(spawnWait);
        }
    }
    void spawnCube(){
      if(this.gameObject.activeInHierarchy){
        GameObject cube1 = Instantiate(cube, Vector3.zero, transform.rotation) as GameObject;
        //cube1.transform.parent = this.transform;
        cubeCount+=1;
      }
    }
}
