from load_image import ft_load
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

def ft_zoom(image: np.ndarray) -> Image.Image:
	resize_image = image[400: 400]
	# print(f"New shape after slicing: {np.array(resize_image).shape}")
	print(f"New shape after slicing: {resize_image.shape}")
	Image.fromarray(resize_image).save('r_animal.jpeg')
	return resize_image


def main():
	image = ft_load("animal.jpeg")
	print(np.array(image))

	rz_image = ft_zoom(image)
	# print(rz_image)
	rz_image.show()


if __name__ == "__main__":
	main()