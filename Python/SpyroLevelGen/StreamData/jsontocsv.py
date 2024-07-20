import csv
import json

# Opening JSON file

with open('D:\Projects\ReignitedTrilogyWorkspace\Python\SpyroLevelGen\StreamData\Spyro1_StreamData.json') as f:
    data = json.load(f)
with open("Spyro1_StreamData.csv", 'w', newline='') as j:
    writer = csv.writer(j)
    writer.writerow(["Key"]+["LevelMapPath"]+["LevelMapNames"]+["IsHomeworld"])
    d=data[0]["Rows"]


    for key,value in d.items():
        print(key)
        level_map_path = value.get("LevelMapPath_2_69C2D7CA46D0D0D7BD0E52B4E34569F0", "")
        level_map_names = value.get("LevelMapNames_5_E26ADFBE45C1447D49600C8C05CAC47B", {})
        level_map_object_name = level_map_names.get("ObjectName", "")
        level_map_object_path = str(level_map_names.get("ObjectPath", "")).replace("Falcon/Plugins","")
        is_homeworld = value.get("IsHomeworld_7_5DF73EB44D5A2591785ED1BE5CB7DE15", False)

        writer.writerow([key, level_map_path, level_map_object_name, level_map_object_path, is_homeworld])


    
    
