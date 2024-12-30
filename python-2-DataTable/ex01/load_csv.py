import pandas as pd

def load(path: str) -> pd.DataFrame:
	try:
		df = pd.read_csv(path)
		return df
	except FileNotFoundError:
		raise FileNotFoundError("the path is not found")
	except pd.errors.EmptyDataError:
		raise ValueError("The file is empty")
	except pd.errors.ParserError:
		raise ValueError("Unable to parse this file")
	except Exception as e:
		raise AssertionError(f"An error occured: {str(e)}")