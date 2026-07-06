#include<iostream>
using namespace std;
bool isPronic(int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		if(i*(i+1) == n)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	if(isPronic(n))
	{
		cout<<"Is a Pronic number."<<endl;
	}
	else
	{
		cout<<"Not a Pronic number."<<endl;
	}
}
