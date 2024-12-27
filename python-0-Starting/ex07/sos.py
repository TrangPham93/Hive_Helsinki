import sys


def ft_sos(s):
	NESTED_MORSE = {" ": "/ ", "A": ".- ", "B": "-... ", "C": "-.-. ",
					"D": "-.. ", "E": ". ", "F": "..-. ", "G": "--. ",
					"H": ".... ", "I": ".. ", "J": ".--- ", "K": "-.- ",
					"L": ".-.. ", "M": "-- ", "N": "-. ", "O": "--- ",
					"P": ".--. ", "Q": "--.- ", "R": ".-. ", "S": "... ",
					"T": "- ", "U": "..- ", "V": "...- ", "W": ".-- ",
					"X": "-..- ", "Y": "-.-- ", "Z": "--.. ", "1": ".---- ",
					"2": "..--- ", "3": "...-- ", "4": "....- ", "5": "..... ",
					"6": "-.... ", "7": "--... ", "8": "---.. ", "9": "----. ",
					"0": "----- "}
	for c in s:
		result = [result.append(NESTED_MORSE[i]) if c.upper() == i for i in NESTED_MORSE.keys()]
	
	for i in NESTED_MORSE.keys():
		if s.upper() == i:
			return NESTED_MORSE[i]


def main():
	if len(sys.argv) != 2:
		print("AssertionError: the arguments are bad")
	else:
		try:
			my_str = sys.argv[1]
			# for i in my_str:
			result = ft_sos(i)
			print(result)
		except ValueError:
			print("AssertionError: the arguments are bad")
			return


if __name__ == "__main__":
	main()