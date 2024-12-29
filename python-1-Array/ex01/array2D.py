import numpy as np

def slice_me(family: list, start: int, end: int) -> list:
	if not isinstance(family, list):
		raise TypeError("Argument is not a list")
	s_len = len(family[0])
	for row in family:
		if len(row) != s_len:
			raise ValueError("Lists are not the same size")
	if not (isinstance(start, int) or isinstance(end, int)):
		raise TypeError("start or end are not integer")
	family = np.array(family)
	print (f"My shape is : {family.shape}")
	family = family[start : end]
	print (f"My new shape is : {family.shape}")
	return (family).tolist()