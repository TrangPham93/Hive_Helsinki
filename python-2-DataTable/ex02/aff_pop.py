import matplotlib.pyplot as plt
import matplotlib.ticker as ticker
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

def million_formatter(x, pos):
	return f'{x/1e6:.0f}M' if x != 0 else '' 

def main():
	try:
		df_population = load("population_total.csv")
		df_population = df_population.loc[:, :'2050']
		df_population = df_population.set_index("country")
		df_finland = df_population.loc["Finland"]
		df_finland = pd.Series([convert_to_numeric(i) for i in df_finland])
		df_france = df_population.loc["France"]
		df_france = pd.Series([convert_to_numeric(i) for i in df_france])
		years = np.array([int(year) for year in df_population.columns])

		plt.figure(figsize = (12, 8))
		plt.plot(years, df_finland, c = 'green', label = "Finland")
		plt.plot(years, df_france, c = 'dodgerblue', label = "France")
		plt.xlabel("Year")
		plt.ylabel("Population")
		plt.title("Population Projections")
		plt.legend(loc = "lower right")
		plt.xticks(np.arange(1800, 2050, 40))
		plt.gca().yaxis.set_major_formatter(ticker.FuncFormatter(million_formatter))
		# plt.gca().yaxis.set_major_locator(ticker.MultipleLocator(20e6))
		plt.yticks(np.arange(20e6,80e6,20e6))
		plt.show()
		
	except Exception as e:
		print(f"An error occurred: {str(e)}")



if __name__ == "__main__":
	main()
	