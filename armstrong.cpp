#include<iostream>
#include<cmath>
using namespace std;
int numberofdigits(int n)
{
	int count = 0;
	while(n > 0)
	{
		count ++;
		n /= 10;
	}
	return count;
}
bool isArmstrong(int n)
{
	int copy_of_n = n;
	int power = numberofdigits(n);
	int ans = 0;
	while(n > 0)
	{
		ans += pow(n%10 , power);
		n /= 10;
	}
	return ans == copy_of_n;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	if(isArmstrong(n))
	{
		cout<<"Is an Armstrong number."<<endl;
	}
	else
	{
		cout<<"Not an Armstrong number."<<endl;
	}
	
	return 0;
}
