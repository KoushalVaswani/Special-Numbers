def isPalindrome(n:int)->bool:
    if(n < 0):
        return False
    num = n
    ans = 0
    while(num > 0):
        dig = num%10
        ans = ans*10 + dig
        num //= 10
    return ans == n


if __name__ == "__main__":
    n = int(input("Enter a number : "))
    if(isPalindrome(n)):
        print("Is a Palindrome.")
    else:
        print("Not a Palindrome.")




    