#include<iostream>
using namespace std;
bool isPalindrome(int n)
{
	if(n < 0)
	{
		return false;
	}
	int num = n;
	int ans = 0;
	while(num > 0)
	{
		ans = ans*10 + num%10;
		num /= 10;
	}
	return ans == n;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	if(isPalindrome(n))
	{
		cout<<"Is a Palindrome."<<endl;
	}
	else
	{
		cout<<"Not a Palindrome."<<endl;
	}
	
	return 0;
}
