using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SaveFile
{
    public float ReplayMultiplier;

    public int NormalCurrency;
    public int PremiumCurrency;

    public List<bool> CurrentCharacterPicked;
    public List<bool> CurrentWatcherPicked;
    public List<bool> CurrentArenaPicked;

    public List<bool> CharacterPageItemsBought;
    public List<bool> ArenaPageItemsBought;
    public List<bool> WatcherPageItemsBought;

    public SaveFile (ScoreManager scoreManager, GameManager gameManager, ShopManager shopManager)
    {
        ReplayMultiplier = scoreManager.ReplayMultiplayer;

        NormalCurrency = gameManager.NormalCurrency;
        PremiumCurrency = gameManager.PremiumCurrency;

        CurrentCharacterPicked = new List<bool>(shopManager.CharacterPage.GetComponent<Page>().isPicked);
        CurrentWatcherPicked = new List<bool>(shopManager.WatcherPage.GetComponent<Page>().isPicked);
        CurrentArenaPicked = new List<bool>(shopManager.ArenaPage.GetComponent<Page>().isPicked);
        CharacterPageItemsBought = new List<bool>(shopManager.CharacterPage.GetComponent<Page>().isBought);
        ArenaPageItemsBought = new List<bool>(shopManager.WatcherPage.GetComponent<Page>().isBought);
        WatcherPageItemsBought = new List<bool>(shopManager.ArenaPage.GetComponent<Page>().isBought);
    }

}
