import matplotlib.pyplot as plt
from load_csv import load
import pandas as pd
import matplotlib.ticker as ticker
import matplotlib.transforms as mtransforms
import numpy as np


def main():
	try:
		df_income = load("income_per_person_gdppercapita_ppp_inflation_adjusted.csv")
		df_income.set_index("country", inplace = True)
		df_income = pd.Series(df_income.loc[:, '1900'])
		# print(df_income)
		# print(df_income.max())
		# print(df_income.min())
		# print(df_income[df_income.isna()])

		df_life = load("life_expectancy_years.csv")
		df_life.set_index("country", inplace = True)
		df_life = df_life.loc[:, '1900']
		# print(df_life.max())
		# print(df_life.min())
		# print(df_life[df_life.isna()])

		df_income = df_income[~(df_life.isna())]
		df_life.dropna(inplace = True)

		fig, ax = plt.subplots(figsize=(12,8))
		ax.set_title("1900")
		ax.set_xlabel("Gross domestic product")
		ax.set_ylabel("Life Expectancy")
		ax.scatter(df_income, df_life)

		ax.set_xscale('log')
		custom_ticks = [300, 1000, 10000]
		ax.set_xticks(custom_ticks)
		ax.set_xticklabels(['300', '1k', '10k'])
		
		plt.show()
	except Exception as e:
		print(f"Error: {e}")

if __name__ == "__main__":
	main()
 