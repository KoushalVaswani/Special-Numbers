def digitsum(n:int)->int:
    sum = 0
    num = n
    while(num > 0):
        sum += num%10
        num //= 10
    return sum
def isNiven(n:int)->int:
    if n%digitsum(n) == 0:
        return True
    return False

if __name__ == "__main__":
    n = int(input("Enter a number : "))
    if(isNiven(n)):
        print("Is a Niven number.")
    else:
        print("not a Niven number.")
        