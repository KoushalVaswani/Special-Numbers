#include<iostream>
#include<cmath>
using namespace std;
bool isPerfectSquare(int n)
{
	if (n<0)
	{
		return false;
	}
	int r = int(pow(n , 0.5));
	return r*r == n;
}
bool isSunny(int n)
{
	if(isPerfectSquare(n+1))
	{
		return true;
	}
	return false;
}
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	if(isSunny(n))
	{
		cout<<"Is a Sunny Number."<<endl;
	}
	else
	{
		cout<<"Not a Sunny Number."<<endl;
	}
}
