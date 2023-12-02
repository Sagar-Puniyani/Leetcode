import pandas as pd 
from typing import List
import sys 
sys.path.append( 'D:\c++\Pointer\Python\pandas_ds')  
from createDataframe import createDataframe

student_data=[
    [1, 15],
    [2, 11],
    [3, 11],
    [4, 20]
]

df  = createDataframe(student_data)

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:


    return employees.head(3)

sample = selectFirstRows(df)
print(sample)


if ( df['age'] == 20).any():
    print("yes")