#include<iostream>
using namespace std;
int main()
{
	int arr[5],*p;
	cout<<"Enter the Numbers : "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	p=arr;
	cout<<"\nYou Entered : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<*p<<endl;
		p++;
	}
	return 0;
}
