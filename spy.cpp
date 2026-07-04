#include<iostream>
using namespace std;
int digitsum(int n)
{
	int sum = 0;
	int num = n;
	while(num > 0)
	{
		sum += num%10;
		num /= 10;
	}
	return sum;
}
int digitproduct(int n)
{
	int prod = 1;
	int num = n;
	while(num > 0)
	{
		prod *= num%10;
		num /= 10;
	}
	return prod;
}
bool isSpy(int n)
{
	if(digitsum(n) == digitproduct(n))return true;
	return false;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	if(isSpy(n))
	{
		cout<<"Is a Spy Number."<<endl;
	}
	else
	{
		cout<<"Not a Spy Number."<<endl;
	}
}
