import csv 
import os
print("File location using os.getcwd():", os.getcwd())


levelCount=301
fileprefix="LL"
fileprefixE="_"
while levelCount <= 337:
    
    f = open(fileprefix+str(levelCount)+fileprefixE+".csv", 'w', newline='')
    writer = csv.writer(f)
    
    writer.writerow([""]+['SublevelName'])
    writer.writerow(["NewRow_0"]+["LS"+str(levelCount)+"_Voice"])
    writer.writerow(["NewRow_1"]+["LS"+str(levelCount)+"_SFX"])
    writer.writerow(["NewRow_2"]+["LS"+str(levelCount)+"_Music"])
    writer.writerow(["NewRow_3"]+["LS"+str(levelCount)+"_ART_MASTER"])
    writer.writerow(["NewRow_4"]+["LS"+str(levelCount)+"_Lighting"])
    writer.writerow(["NewRow_5"]+["LS"+str(levelCount)+"_Fx"])
    writer.writerow(["NewRow_6"]+["LS"+str(levelCount)+"_Enemy"])
    writer.writerow(["NewRow_7"]+["LS"+str(levelCount)+"_Design"])
    writer.writerow(["NewRow_8"]+["LS"+str(levelCount)+"_Loot"])
    writer.writerow(["NewRow_9"]+["LS"+str(levelCount)+"_Art03"])
    writer.writerow(["NewRow_10"]+["LS"+str(levelCount)+"_Art02"])
    writer.writerow(["NewRow_11"]+["LS"+str(levelCount)+"_Art01"])
    writer.writerow(["NewRow_12"]+["LS"+str(levelCount)+"_Cinematics"])
    writer.writerow(["NewRow_13"]+["LS"+str(levelCount)+"_Transport"])
    f.close()
    levelCount += 1
