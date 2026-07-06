#include<iostream>
#include<cmath>
using namespace std;
int digitsum(int n)
{
	int count = 0;
	while(n>0)
	{
		count++;
		n/=10;
	}
	return count;
}
bool isDisarium(int n)
{
	int sum = 0;
	int power = digitsum(n);
	int num = n;
	while(num > 0 )
	{
		sum += pow(num%10 , power);
		power--;
		num /= 10;
	}
	return n == sum;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	if(isDisarium(n))
	{
		cout<<"Is a Disarium number."<<endl;
	}
	else
	{
		cout<<"Not a Disarium number."<<endl;
	}
}
