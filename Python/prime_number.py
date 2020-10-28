#Program to find if a number is prime or not

def prime(n):               #Function to check if a number is prime or not
    flag=0
    
    for i in range(2,n):
        if n%i==0:
            flag=1

    return flag

n=int(input())             #Reading the input

if prime(n)==0:
    print('Prime number')   #Printing the result

else:
    print('Not a prime number')
