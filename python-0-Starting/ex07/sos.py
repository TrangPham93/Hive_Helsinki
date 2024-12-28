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
	result = ''
	for c in s.upper():
		if c not in NESTED_MORSE:
			raise AssertionError("the arguments are bad")
		result += NESTED_MORSE[c]
	return result[:-1]
			

def main():
	if len(sys.argv) != 2:
		print("AssertionError: the arguments are bad")
	else:
		try:
			my_str = sys.argv[1]
			result = ft_sos(my_str)
			print(result)
		except AssertionError as e:
			print(f"AssertionError: {e}")
			return


if __name__ == "__main__":
	main()