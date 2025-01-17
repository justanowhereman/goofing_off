# first function prints 1 3 7 then other function in decreasing order
# while loop and value increased by 2
# start and end 

n= int(input("enter the initial number: "))
e= int(input("enter the ending number: "))

def plusplus(n, e):
    
    e1=3
    while(e>=n):
        print(e1*"\t"+ "*" * n + "\t"*e1)
        n=n+1
        e1=e1-1
        
        
def minusminus(n, e):
    
    while(e>=n):
        print("*" * e)
        e=e-1
        
        
plusplus(n, e)
minusminus(n, e)