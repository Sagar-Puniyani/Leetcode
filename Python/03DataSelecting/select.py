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

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    return students[students['StudentID'] == 101]



def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees['bonus'] =  2*employees['age']
    return employees

df = createBonusColumn(df)
print(df)