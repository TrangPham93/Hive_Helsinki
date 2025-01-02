from S1E9 import Character

class Baratheon(Character):
	'''
	Representing the Baratheon family.
	'''
	def __init__(self, first_name, is_alive=True):
		super().__init__(first_name, is_alive)
		self.family_name = "Baratheon"
		self.eyes = "brown"
		self.hairs = "dark"
	
	def __str__(self):
		return super().__str__()
	
	def __repr__(self):
		return f"Vector: ('{self.first_name}', '{self.eyes}', '{self.hairs}')"
	
	def die(self):
		self.is_alive = False

class Lannister(Character):
	def __init__(self, first_name, is_alive=True):
		super().__init__(first_name, is_alive)
		self.family_name = "Lannister"
		self.eyes = "blue"
		self.hairs = "light"

	def __str__(self):
		return super().__str__()
	
	def __repr__(self):
		return f"Vector: ('{self.first_name}', '{self.eyes}', '{self.hairs}')"
	
	def die(self):
		self.is_alive = False

	@classmethod
	def create_lannister(cls, first_name, is_alive = True):
		'''
		classmethod define a method that is bound to the class and not an instance of the class
		'''
		return cls(first_name, is_alive)