def isTrimorphic(n:int)->bool:
    cube = n*n*n
    if str(cube).endswith(str(n)):
        return True
    return False

if __name__ == "__main__":
    n = int(input("Enter a number : "))
    if isTrimorphic(n):
        print("Is a Trimorphic number.")
    else:
        print("not a Trimorphic number.")
