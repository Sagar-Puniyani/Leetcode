import sys 
import pandas as pd 
from typing import List
sys.path.append( 'D:\c++\Pointer\Python\pandas_ds')  
from createDataframe import createDataframe
student_data=[
    [1, 15],
    [2, 11],
    [3, 11],
    [4, 20]
]

df  = createDataframe(student_data)

list = []
shape = df.shape 
print("shape : " ,shape[0])
print("type of shape : " ,type(shape))

list.append(shape[0])
list.append(shape[1])

print( "list : " , list )

# def getDataframeSize(players: pd.DataFrame) -> List[int]:
#     list = []
#     shape = players.shape 
#     list.append(shape[0])
#     list.append(shape[1])
#     return list

def gettingDataframeSize(players: pd.DataFrame) -> List[int]:
    rows,columns=players.shape
    return [rows,columns]

data = gettingDataframeSize(df)
print(data)