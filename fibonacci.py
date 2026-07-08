def isFibonacci(n:int)->bool:
    a = 0 
    b = 1
    while a < n:
        a,b = b,a+b
    
    if a == n:
        return True
    return False

if __name__ == "__main__":
    n = int(input("Enter a number : "))

    if isFibonacci(n):
        print("Is a Fibonacci number.\n")
    else:
        print("Not a Fibonacci number.\n")

        