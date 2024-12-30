from matplotlib import pyplot as plt
from load_csv import load
import numpy as np


def main():
	try:
		df = load("life_expectancy_years.csv")
		df.index = df["country"]
		df_FL = df.loc["Finland"]
		# print(df_FL)
		# print(df_FL.shape)
		years = df_FL.index[1:]
		xpoints = np.array([int(year) for year in years])
		ypoints = np.array(df_FL)[1:]
		print(xpoints)
		# print(ypoints)
		plt.figure(figsize=(12, 8))
		plt.plot(xpoints, ypoints)
		plt.title("Finland Life expectancy Projections")
		plt.xlabel("Year")
		plt.ylabel("Life expectancy")
		
		plt.yticks(np.arange(0, 100, 10))
		plt.show()
	except Exception as e:
		print(f"An error occurred: {str(e)}")
	

if __name__ == "__main__":
	main()