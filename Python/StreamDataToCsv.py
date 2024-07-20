import json

jsonpath=r"D:\Projects-Github\Output\Exports\Falcon\Plugins\GameplayCommon\Content\LevelMechanics\LevelStreaming\StreamingData\LevelPaths\LevelMapTableG3.json"
with open(jsonpath) as f:
    data=json.load(f)
    properties=(data[0]["Rows"])
    

    for key,value in properties.items():
        key
        levelPath=value.get("levelPath")
        homeLevel=value.get("homeLevel")
        DisplayName=value.get("displayName")
        bossLevel=value.get("bossLevel")
        flightLevel=value.get("flightLevel")
        excludeFromGameProgressionCompletion=value.get("excludeFromGameProgressionCompletion")
        excludeFromGameProgressionCompletionScalar=format(value.get("excludeFromGameProgressionCompletionScalar"),'.6f')
        progressionMapList=[]
        for value in value.get("progressionMap").values():
            for list in value:
                InventoryType=list.get("Key").replace("EInventoryType::","")
                Value=list.get("Value")
                progressionMapList.append(f"({InventoryType}, {format(Value, '.6f')})")
        progressionMapStr=f"(typeScalarMap=({','.join(progressionMapList)}))"
            



        print(f'{key},"{levelPath}","{homeLevel}","{DisplayName}","{bossLevel}","{flightLevel}","{excludeFromGameProgressionCompletion}","{excludeFromGameProgressionCompletionScalar}","{progressionMapStr}"')