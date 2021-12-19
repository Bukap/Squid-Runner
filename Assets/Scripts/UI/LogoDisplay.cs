using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LogoDisplay : MonoBehaviour
{
    private Image image;

    private Vector4 colorValue = new Vector4(255, 255, 255, 0);

    [SerializeField] private float apearSpeed;

    void Start()
    {
        image = GetComponent<Image>();
        image.color = new Vector4(255, 255, 255, 0);
    }

    void FixedUpdate()
    {
        image.color = colorValue;
        colorValue += new Vector4(255, 255, 255, apearSpeed);
    }
}
