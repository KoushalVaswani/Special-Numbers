def isBuzz(n:int)->bool:
    if n%7 == 0 or n%10 == 7:
        return True
    return False

if __name__ == "__main__":
    n = int(input("Enter a number : "))
    if isBuzz(n):
        print("Is a Buzz number.")
    else:
        print("Not a Buzz number.")
    