from abc import ABC, abstractmethod

class Character(ABC):
	"""Character: parent class"""
	def __init__(self, first_name, is_alive = True):
		'''
		Built-in function
		All classes have and is executed when the class is being initiated
		Used to assign values to object properties
		'''
		self.first_name = first_name
		self.is_alive = is_alive
	
	
	@abstractmethod
	def die(self):
		pass

class Stark(Character):
	"""
	Your docstring for Class
	Child Class: Inherit the functionality from Character class
	"""
	def __init__(self, first_name, is_alive=True):
		'''
		Your docstring for Constructor
		By using the super() function, you do not have to use the name of the parent element, 
		it will automatically inherit the methods and properties from its parent.
		'''
		super().__init__(first_name, is_alive)

	def die(self):
		'''
		Your docstring for Method
		Set the value of is_alive to False
		'''
		self.is_alive = False