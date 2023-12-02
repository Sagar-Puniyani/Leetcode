import pandas as pd
from typing import List

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
    col = ['student_id' , 'age' ]
    df = pd.DataFrame(student_data, columns=col)

    return df

student_data=[
    [1, 15],
    [2, 11],
    [3, 11],
    [4, 20]
]

result_df = createDataframe(student_data)
print(result_df)
