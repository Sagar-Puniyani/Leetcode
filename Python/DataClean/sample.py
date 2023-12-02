from typing import List

def arrayStringsAreEqual(word1: List[str], word2: List[str]) -> bool:
    temp1 = ""
    temp2 = ""
    if len(word1) > 0 :
        for i in word1:
            temp1 += i
            print("temp1 " , temp1)
        
    if len(word2) > 0 :
        for i in word2:
            temp2 += i
            print("temp2 " , temp2)
        
    
    if temp1 != temp2 :
        return  False
    else:
        return True
            
# driving main 

word1 = ["ab" , "c"]
word2 = ["ac" , "b"]

print("Ans " ,arrayStringsAreEqual(word1 , word2 ))