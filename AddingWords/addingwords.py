import sys

variable = {}
statement = []


for words in sys.stdin:
	if words != 'clear\n':
		words = list(words.split())
		if words[0] == 'def':
			variable[words[1]] = int(words[2])
		elif words[0] == 'calc':
			statement.append(words[1:])
			words = words[1:]
			calc = 0
			i = 0
			while i < (len(words)):
				if words[i] == '+' and words[i+1] in variable.keys():
						calc += int(variable[words[i+1]])
						i += 1
				elif words[i] == '-' and words[i+1] in variable.keys():
						calc -= int(variable[words[i+1]])
						i += 1
				elif words[i] == '*' and words[i+1] in variable.keys():
						calc *= int(variable[words[i+1]])
						i += 1
				elif words[i] == '/' and words[i+1] in variable.keys():
						calc /= int(variable[words[i+1]])
						i += 1
				elif words[i] == '=':
					break
				elif words[i] in variable.keys():
						calc += int(variable[words[i]])
				else:
					calc = 'unknown'
					break
				i += 1

			var = list(variable.values())
			key = list(variable.keys())
			print((' ').join(words), end = ' ')
			if calc in variable.values():
				print(key[var.index(calc)])
			else:
				print('unknown')
	else:
		variable.clear()
		statement.clear()
