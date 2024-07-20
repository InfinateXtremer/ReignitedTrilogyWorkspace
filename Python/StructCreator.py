import sys, os, json, re

def main():
	targetPath = sys.argv[1]

	if not os.path.isfile(targetPath):
		print('Path does not resolve to file')
		return
	
	with open(targetPath, 'r') as file:
		jobject = json.load(file)
		properties = jobject[0]['Children']
		property_types = jobject[1:]

		variable_names = []
		current_variable_index = 0
		for property in properties:
			result = re.search(r"(?P<type>.*)'.*:(?P<label>.*)_(?P<postfix>\d*)_(?:.){32}'", property['ObjectName'])
			variable_names.append({
				'index': current_variable_index,
				'type': result.group('type'),
				'label': result.group('label'),
				'name': re.search(r".*'.*:(.*_\d*_.{32})'",property['ObjectName']).group(1),
				'postfix': int(result.group('postfix'))
			})

			current_variable_index += 1

		postfix_sorted_variables = variable_names.copy()
		postfix_sorted_variables.sort(key=lambda vname:vname['postfix'])

		variables_created = 1
		variables_setup = 0
		last_type_name = ''
		# First variable is given ^

		current_postfix = 0
		for variable in postfix_sorted_variables:
			print(f'\033[96mFor Variable "{variable["label"]}_{variable["postfix"]}"')
			while current_postfix < variable['postfix'] - 1:
				if variables_setup < len(variable_names):
					current_postfix += 1

					if variables_setup < variables_created:
						property_type = next((property_type for property_type in property_types if property_type['Name'] == variable_names[variables_setup]['name']), None)
						
						property_type_name = property_type['Class']
						if 'Enum' in property_type:
							property_type_name = property_type['Enum']['ObjectName']
						if 'MetaClass' in property_type:
							property_type_name = property_type['MetaClass']['ObjectName']
						if 'Struct' in property_type:
							property_type_name = property_type['Struct']['ObjectName']

						if property_type_name == last_type_name:
							print(f'\033[37m\tCreate Variable \033[90m-> _{current_postfix}')
							variables_created += 1
							variables_setup += 1
						
						else:
							print(f'\033[37m\tChange Type of Variable {variables_setup} to \033[33m{property_type_name} \033[90m-> _{current_postfix}')
							variables_setup += 1
						
						last_type_name = property_type_name
					else:
						print(f'\033[37m\tCreate Variable \033[90m-> _{current_postfix}')
						variables_created += 1
				
				else:
					new_variables = variable['postfix'] - 1 - current_postfix
					current_postfix += new_variables
					variables_created += new_variables
					print(f'\033[37m\tCreate {new_variables} Variables \033[90m-> _{current_postfix}')
				
			current_postfix += 1
			print(f'\033[32m\tChange Label of Variable {variable["index"]} to "\033[33m{variable["label"]}\033[32m" \033[90m-> _{current_postfix}')
	
		print('\033[93m' + f'Remove Extra Variables ({variables_created - len(variable_names)})')
		print('\033[0m')

	pass

if __name__ == "__main__":
	main()