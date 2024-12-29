import numpy as np
from PIL import Image

def ft_load(path: str) :
	'''
	ft_load to load an image and return the shape and array of the image.

	1st method:
		matplotlib.image: read the image directly to a numpy array representing the image.
		Designed for data visualization and ploting.

	2nd method:
		PIL.IMage: designed for general image processing tasks and return a PIL.Image object.
		Need to convert to array using np.asarray() function.
	'''
	# load_image = Image.open(path)
	# print(f"The shape of image is: {np.array(load_image).shape}")
	# return load_image

	load_image = np.array(Image.open(path))
	print(f"The shape of image is: {load_image.shape}")
	return load_image