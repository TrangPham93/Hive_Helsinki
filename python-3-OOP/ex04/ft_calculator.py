class calculator:
	def __init__(self):
		'''
		a class with only staticmethod doesn't need initialize instance, cause the function doesn't need
		access to self or cls, so doesn't need __init__ method
		'''
		pass

	@staticmethod
	def dotproduct(V1: list[float], V2: list[float]) -> None:
		print(f"Dot product is: {sum(x*y for x, y in zip(V1, V2))}")

	@staticmethod
	def add_vec(V1: list[float], V2: list[float]) -> None:
		print(f"Add Vector is: {[float(x + y) for x, y in zip(V1, V2)]}")

	@staticmethod
	def sous_vec(V1: list[float], V2: list[float]) -> None:
		print(f"Sous Vector is: {[float(x - y) for x, y in zip(V1, V2)]}")
