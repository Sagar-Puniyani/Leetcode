import pandas as pd


# Drop the Duplicate Elements 
def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
    customers.drop_duplicates(subset='Email', keep='first')

# Drop the missing values 

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
    students.dropna(how='any')


# Write a solution to modify the salary column by multiplying each salary by 2.
def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees['salary'] = 2* employees['salary']
    return employees

# A solution to rename the columns 

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
    renaming = { 
        "id" : "student_id" ,
        "first" : "first_name",
        "last" : "last_name",
        "age" : "age_in_years "
    }

    return students.rename(column = renaming )


#  Changing the Data type
def changeDatatype(students: pd.DataFrame) -> pd.DataFrame:
    students["grade"] = students["grade"].astype(int)
    return students 

# Placing zero where values are missing 

def fillMissingValues(products: pd.DataFrame) -> pd.DataFrame:
    products['quantity'] = products['quantity'].fillna(0)
    return products  

# concatenation of dataset vertically 
def concatenateTables(df1: pd.DataFrame, df2: pd.DataFrame) -> pd.DataFrame:
    result = pd.concat([df1, df2], axis=0) 
    return result