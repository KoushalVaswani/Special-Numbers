def digits(n:int)->int:
    count=0
    while(n>0):
        count+=1
        n//=10
    return count

def isDisarium(n:int)->bool:
    sum = 0
    power = digits(n)
    num = n
    while(num>0):
        digit = num%10
        sum += digit**power
        power-=1
        num//=10
    return sum == n

if __name__ == "__main__":
    n = int(input("Enter a number : "))
    if isDisarium(n):
        print("Is a Disarium number.")
    else:
        print("Not a Disarium number.")
        
