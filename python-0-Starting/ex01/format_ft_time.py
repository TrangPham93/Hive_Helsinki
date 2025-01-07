from datetime import datetime

start_date = datetime(1970, 1, 1)
today_date = datetime.now()
difference = today_date - start_date

# print(f"Second since {start_date.strftime('%B %d, %Y')}: {difference.total_seconds():,} or {difference.total_seconds():.2e} in scientific notation")
print(f"Second since {start_date:%B} {start_date.day}, {start_date:%Y}: {difference.total_seconds():,} or {difference.total_seconds():.2e} in scientific notation")
print(today_date.strftime("%b %d %Y"))
