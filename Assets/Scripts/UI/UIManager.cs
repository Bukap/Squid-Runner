using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class UIManager : MonoBehaviour
{
    private Canvas canvas;
    #region Prefabs
    [SerializeField] private GameObject PressToStartPrefab;
    [SerializeField] private GameObject MainMenuPrefab;
    [SerializeField] private GameObject StartGamePrefab;
    [SerializeField] private GameObject GameplayPrefab;
    [SerializeField] private GameObject GameOverPrefab;
    [SerializeField] private GameObject VictoryPrefab;
    [SerializeField] private GameObject OptionsPrefab;
    [SerializeField] private GameObject ShopPrefab;
    [SerializeField] private GameObject EquipmentPrefab;
    #endregion
    #region UI Objects
    [SerializeField] private GameObject PressToStartScreen;
    [SerializeField] private GameObject MainMenuScreen;
    [SerializeField] private GameObject StartGameScreen;
    [SerializeField] private GameObject GameplayScreen;
    [SerializeField] private GameObject GameOverScreen;
    [SerializeField] private GameObject VictoryScreen;
    [SerializeField] private GameObject OptionsScreen;
    [SerializeField] private GameObject ShopScreen;
    [SerializeField] private GameObject EquipmentScreen;
    #endregion

    void Start()
    {
        canvas = FindObjectOfType<Canvas>();
    }


    void Update()
    {
        
        

    }

    public void DestroyAll()
    {
        Destroy(PressToStartScreen);
        Destroy(MainMenuScreen);
        Destroy(StartGameScreen);
        Destroy(GameplayScreen);
        Destroy(GameOverScreen);
        Destroy(VictoryScreen);
        Destroy(OptionsScreen);
        Destroy(ShopScreen);
        Destroy(EquipmentScreen);
    }

}
