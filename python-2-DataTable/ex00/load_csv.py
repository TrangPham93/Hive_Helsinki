import pandas as pd

def load(path: str) -> pd.DataFrame:
	try:
		df = pd.read_csv(path)
		print(f"Loading dataset of dimensions {df.shape}")
		return df
	except FileNotFoundError:
		raise FileNotFoundError(f"The path is not found")
	except pd.errors.EmptyDataError:
		raise ValueError(f"The file is empty")
	except pd.errors.ParserError:
		raise ValueError(f"Unable to parse the file")
	except Exception as e:
		raise AssertionError("An error occured while loading the file")
	


