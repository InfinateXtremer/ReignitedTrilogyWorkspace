import os
import json

def main():
    targetPath = "D:\\Projects\\ReignitedTrilogyWorkspace\\Python\\GlobalPersistentLevel.json"

    if not os.path.isfile(targetPath):
        print('Path does not resolve to file')
        return

    with open(targetPath, 'r') as file:
        data = json.load(file)

        formatted_data_list = []
        
        for item in data:
            if item.get("Name") == "PhasmidGameInventoryMonitor_1":
                for entry in item.get('Properties')['gameMap']:
                    main_key = entry['Key']
                    inventory_map = entry['Value']['inventoryMap']
                    # Format the inventory map without adding quotes around numbers
                    formatted_inventory_map = ', '.join(
                        f"({inv_item['Key'].split('::')[-1]}, {inv_item['Value']})"
                        if isinstance(inv_item['Value'], int) else
                        f"({inv_item['Key'].split('::')[-1]}, '{inv_item['Value']}')"
                        for inv_item in inventory_map
                    )
                    # Creating the final formatted tuple
                    formatted_data = fr'("{main_key}", (inventoryMap=({formatted_inventory_map})))'
                    #print(formatted_data)
					#(("LS101_ART_MASTER", (inventoryMap=((EIT_Life, 1),(EIT_GreenGem, 19),(EIT_BlueGem, 1),(EIT_RedGem, 51),(EIT_S2RedGem, 6),(EIT_Dragon, 4)))),("LS102_ART_MASTER", ()))

                    formatted_data_list.append(formatted_data)

		# Printing the final formatted data as a tuple of tuples
        final_output = f"({', '.join(formatted_data_list)})"
        print(final_output)




if __name__ == "__main__":
    main()
