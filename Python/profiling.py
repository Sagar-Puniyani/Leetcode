import pandas as pd
from ydata_profiling import ProfileReport

# Load the Titanic dataset
df = pd.read_csv(r'C:\Users\NISHCHAL_PUNIYANI\Downloads\archive\Titanic-Dataset.csv')

# Create a profile report
profile = ProfileReport(df)

# Save the profile report to an HTML file
profile.to_file(output_file='output.html')
