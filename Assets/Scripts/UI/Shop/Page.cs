using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Page : MonoBehaviour
{
    [SerializeField] private List<GameObject> objects;

    public List<bool> isBought;
    public List<bool> isPicked;

    void Start()
    {
        for(int i=0; i < objects.Count; i++)
        {
            isBought[i] = objects[i].GetComponent<ItemDisplay>().bought;
            isPicked[i] = objects[i].GetComponent<ItemDisplay>().picked;
        }
    }
}
