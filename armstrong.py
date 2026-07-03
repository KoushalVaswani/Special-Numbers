def numberofdigits(n : int) -> int:
    count = 0  
    while(n > 0):
        count += 1
        n = n // 10
    return count

def armstrong(n:int)->bool:
    pow = numberofdigits(n)
    ans = 0
    copy_of_n = n
    while(n > 0):
        ans += (n%10)**pow
        n //= 10
    return ans == copy_of_n

if __name__ == "__main__":
    num = int(input("Enter a number : "))
    if armstrong(num):
        print("Is an Armstrong number.")
    else:
        print("Not an Armstrong number.")
        
