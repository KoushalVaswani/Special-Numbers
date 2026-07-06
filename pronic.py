def isPronic(n:int)->bool:
    for i in range(n):
        if i*(i+1) == n:
            return True
    return False

if __name__ == "__main__":
    n = int(input("Enter a number : "))
    if isPronic(n):
        print("Is a Pronic number.")
    else:
        print("Not a Pronic number.")
        