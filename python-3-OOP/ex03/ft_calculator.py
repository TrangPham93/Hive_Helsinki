class calculator:
	def __init__(self, number_list):
		'''
		Initialize the calculator object with a list of numbers 
		'''
		self.number_list = number_list

	def __str__(self):
		'''
		String representation of the number list
		'''
		return f"{self.number_list}"

	def __add__(self, object) -> None:
		'''
		Adds a number to each element in the list
		'''
		if isinstance(object, int):
			self.number_list = [(num + object) for num in self.number_list]
		print(self.number_list)

	def __mul__(self, object) -> None:
		if isinstance(object, int):
			self.number_list = [(num*object) for num in self.number_list]
		print(self.number_list)

	def __sub__(self, object) -> None:
		if isinstance(object, int):
			self.number_list = [(num-object) for num in self.number_list]
		print(self.number_list)

	def __truediv__(self, object) -> None:
		if object == 0:
			raise ZeroDivisionError("Cannot divide by 0")
		if isinstance(object, int):
			self.number_list = [(num/object) for num in self.number_list]
		print(self.number_list)
		