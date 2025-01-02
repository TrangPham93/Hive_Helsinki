def ft_statistics(*args: any, **kwargs: any) -> None:
	for k, val in kwargs.items():
		try:
			if val == "mean":
				print(f"{val} : {sum(args) / len(args)}")
			elif val == "median":
				args = sorted(args)
				if len(args) % 2 != 0:
					median = args[round(len(args) / 2)]
				else:
					median = ( args[round(len(args) / 2)] +  args[round(len(args) / 2) - 1]) / 2
				print(f"{val} : {median}")

			elif val == "quartile":
				first_quartile = round((len(args) + 1) / 4) -1 
				third_quartile = round((len(args) + 1) / 4 * 3) - 1
				args = sorted(args)
				print(f"{val} : {[float(args[first_quartile]), float(args[third_quartile])]}")

			elif val == "std":
				mean = sum(args) / len(args)
				variance = sum((x - mean) ** 2 for x in args) / len(args)
				std_dev = variance ** 0.5
				print(f"{val} : {std_dev}")

			elif val == "var":
				mean = sum(args) / len(args)
				variance = sum((x - mean) ** 2 for x in args) / len(args)
				print(f"{val} : {variance}")
		except:
			print("ERROR")		
			
		