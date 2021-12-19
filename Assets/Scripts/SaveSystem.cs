using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public static class SaveSystem { 

    public static void SaveProgress(ScoreManager scoreManager, GameManager gameManager, ShopManager shopManager)
    {
        BinaryFormatter formatter = new BinaryFormatter();
        string path = Application.persistentDataPath + ".squid";
        FileStream stream = new FileStream(path, FileMode.Create);

        SaveFile file = new SaveFile(scoreManager, gameManager, shopManager);

        formatter.Serialize(stream, file);
        stream.Close();
    }

    public static SaveFile LoadProgress()
    {
        string path = Application.persistentDataPath + ".squid";
        if (File.Exists(path))
        {
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream(path, FileMode.Open);

            SaveFile file = formatter.Deserialize(stream) as SaveFile;
            stream.Close();

            return file;
        }
        else
        {
            Debug.LogError("Save file not found in " + path);
            return null;
        }
    }

}
