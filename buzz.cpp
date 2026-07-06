#include<iostream>
using namespace std;
bool isBuzz(int n)
{
	if(n%7 == 0 || n%10 == 7)
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
	if(isBuzz(n))
	{
		cout<<"Is a Buzz number."<<endl;
	}
	else
	{
		cout<<"Not a Buzz number."<<endl;
	}
}
