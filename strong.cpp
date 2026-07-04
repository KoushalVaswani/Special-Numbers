#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n == 0 || n == 1)
	{
		return 1;
	}
	return n*factorial(n-1);
}
bool isStrong(int n)
{
	int sum = 0;
	int num = n;
	while(num > 0)
	{
		sum += factorial(num%10);
		num /= 10;
	}
	return sum == n;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	if(isStrong(n))
	{
		cout<<"Is a Strong Number."<<endl;
	}
	else
	{
		cout<<"Not a Strong Number."<<endl;
	}
}
