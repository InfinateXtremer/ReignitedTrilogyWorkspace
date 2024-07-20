def little_endian_transform(guid):
    # Split the GUID into its component parts

    #Example Data:{237C15B6-49F7-4E8F-1415-4794D0B496BD}
    data1 = guid[:8] #237C15B6
    data2 = guid[8:12] #49F7
    data3 = guid[12:16] #4E8F
    data4 = guid[16:20] #1415
    data5 = guid[20:24] #4794
    data6 = guid[24:] #D0B496BD

    # Reverse bytes of data4 and apply the specific transformation rule
    transformed_data4 = data4[2:4] + data4[0:2]
    transformed_data5 = data5[2:4] + data5[0:2]
    transformed_data6 = data6[6:8] + data6[4:6] + data6[2:4] + data6[0:2] 

    # Reverse bytes of data5
    reversed_data5 = ''.join(reversed([data5[i:i+2] for i in range(0, len(data5), 2)]))

    # Construct the transformed GUID
    transformed_guid = f"{data1}-{data3}-{data2}-{transformed_data5}-{transformed_data4}{transformed_data6}"
    
    return transformed_guid

# Test the function with the given GUID
original_guid = "57731B13-4D4FFC19-3510C48B-678FDF7A".replace("-","")
transformed_guid = little_endian_transform(original_guid)

# Display the results
print(f"Original GUID: {original_guid[:8]}-{original_guid[8:12]}-{original_guid[12:16]}-{original_guid[16:20]}-{original_guid[20:]}")
print(f"Transformed GUID: {transformed_guid}")

