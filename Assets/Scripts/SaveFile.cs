using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaveFile
{
    public float ReplayMultiplier;

    public int NormalCurrency;
    public int PremiumCurrency;

    public bool[] CurrentCharacterPicked;
    public bool[] CurrentWatcherPicked;
    public bool[] CurrentArenaPicked;

    public bool[] CharacterPageItemsBought;
    public bool[] ArenaPageItemsBought;
    public bool[] WatcherPageItemsBought;

    public SaveFile (ScoreManager scoreManager, GameManager gameManager, ShopManager shopManager)
    {
        ReplayMultiplier = scoreManager.ReplayMultiplayer;

        NormalCurrency = gameManager.NormalCurrency;
        PremiumCurrency = gameManager.PremiumCurrency;

        for(int i = 0;i< shopManager.CharacterPage.GetComponent<Page>().isPicked.Count; i++)
        {
            CurrentCharacterPicked[i] = shopManager.CharacterPage.GetComponent<Page>().isPicked[i];
        }
        for (int i = 0; i < shopManager.WatcherPage.GetComponent<Page>().isPicked.Count; i++)
        {
            CurrentWatcherPicked[i] = shopManager.WatcherPage.GetComponent<Page>().isPicked[i];
        }
        for (int i = 0; i < shopManager.ArenaPage.GetComponent<Page>().isPicked.Count; i++)
        {
            CurrentArenaPicked[i] = shopManager.ArenaPage.GetComponent<Page>().isPicked[i];
        }

        for (int i = 0; i < shopManager.CharacterPage.GetComponent<Page>().isBought.Count; i++)
        {
            CharacterPageItemsBought[i] = shopManager.CharacterPage.GetComponent<Page>().isBought[i];
        }
        for (int i = 0; i < shopManager.WatcherPage.GetComponent<Page>().isBought.Count; i++)
        {
            WatcherPageItemsBought[i] = shopManager.WatcherPage.GetComponent<Page>().isBought[i];
        }
        for (int i = 0; i < shopManager.ArenaPage.GetComponent<Page>().isBought.Count; i++)
        {
            ArenaPageItemsBought[i] = shopManager.ArenaPage.GetComponent<Page>().isBought[i];
        }
    }

}
