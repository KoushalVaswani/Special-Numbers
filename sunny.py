def isPerfectSquare(n: int) -> bool:
    if n < 0:
        return False
    r = int(n ** 0.5)
    return r * r == n

def isSunny(n:int)->bool:
    if(isPerfectSquare(n+1)):
        return True
    return False

if __name__ == "__main__":
    n = int(input("Enter a number : "))
    if(isSunny(n)):
        print("Is a Sunny Number.")
    else:
        print("Not a Sunny Number.")
