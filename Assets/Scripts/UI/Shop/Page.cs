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
        PageLoad();
    }

    void FixedUpdate()
    {
        PageUpdate();
    }

    public void PageLoad()
    {
        for (int i = 0; i < objects.Count; i++)
        {
            objects[i].GetComponent<ItemDisplay>().bought = isBought[i];
            objects[i].GetComponent<ItemDisplay>().picked = isPicked[i];
        }
    }

    public void PageUpdate()
    {
        for(int i=0; i < objects.Count; i++)
        {
            isBought[i] = objects[i].GetComponent<ItemDisplay>().bought;
            isPicked[i] = objects[i].GetComponent<ItemDisplay>().picked;
        }
    }
}
