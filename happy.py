def is_happy(n):
    seen = set()
    
    while n != 1 and n not in seen:
        seen.add(n)
        n = sum(int(digit) ** 2 for digit in str(n))
        
    return n == 1

if __name__ == "__main__":
    n = int(input("Enter a number : "))
    if is_happy(n):
        print("Is a Happy Number.")
    else:
        print("Not a Happy Number.")