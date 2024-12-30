import matplotlib.pyplot as plt
import pandas as pd
from load_csv import load
import numpy as np

def convert_to_numeric(value):
	if isinstance(value, str):
		if value.endswith('k'):
			return float(value[:-1])*1000
		elif value.endswith('M'):
			return float(value[:-1])*1000000
		else:
			return float(value)
	return value

def main():
	try:
		df_population = load("population_total.csv")
		
		df_population = df_population.set_index("country")
		# print(df_population)
		df_finland = df_population.loc["Finland"]
		df_finland = pd.Series([convert_to_numeric(i) for i in df_finland])
		# print(df_finland)
		df_france = df_population.loc["France"]
		df_france = pd.Series([convert_to_numeric(i) for i in df_france])
		years = np.array([int(year) for year in df_population.columns])
		# print(years)
		# print(df_france)
		plt.figure(figsize = (12, 8))
		plt.plot(years, df_finland, c = '#4CAF50')
		plt.plot(years, df_france)
		plt.xlabel("Year")
		plt.ylabel("Population")
		plt.title("Population Projections")
		plt.xticks(np.arange(1800, 2050, 40))
		plt.show()
		
	except Exception as e:
		print(f"An error occurred: {str(e)}")



if __name__ == "__main__":
	main()
	