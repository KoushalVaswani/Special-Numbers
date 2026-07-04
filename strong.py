def factorial(n:int)->int:
    if n == 0 or n == 1:
        return 1
    return n*factorial(n-1)

def isStrong(n:int)->bool:
    sum = 0
    num = n
    while(num > 0):
        sum += factorial(num%10)
        num //= 10
    return sum == n

if __name__ == "__main__":
    n = int(input("Enter a number : "))
    if(isStrong(n)):
        print("Is a Strong number.")
    else:
        print("Not a Strong number.")
    
