#include<iostream>
using namespace std;
int digitsum(int n)
{
	int sum = 0;
	int num = n;
	while(num>0)
	{
		sum += num%10;
		num /= 10;
	}
	return sum;
}
bool isNiven(int n)
{
	if(n % digitsum(n) == 0)
	{
		return true;
	}
	return false;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	if(isNiven(n))
	{
		cout<<"Is a Niven number."<<endl;
	}
	else
	{
		cout<<"Not a Niven number."<<endl;
	}
}
