def digitsum(n:int)->int:
    sum = 0
    num = n
    while(num>0):
        sum += num%10
        num //= 10
    return sum

def digitproduct(n:int)->int:
    prod = 1
    num = n
    while(num>0):
        prod *= num%10
        num //= 10
    return prod

def isSpy(n:int)->bool:
    if digitsum(n) == digitproduct(n):
        return True
    return False

if __name__ == "__main__":
    n = int(input("Enter a number: "))
    if(isSpy(n)):
        print("Is a Spy number.")
    else:
        print("Not a Spy number.")