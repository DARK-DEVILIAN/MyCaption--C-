#include<iostream>
using namespace std;
int main()
{
	int h,m,s,hs,ms,total;
	cout<<"Enter time:\nHours? ";
	cin>>h;
	cout<<"Minutes? ";
	cin>>m;
	cout<<"Seconds? ";
	cin>>s;
	if(h<10)
	{
		cout<<"The time is = 0"<<h;
	}
	else
	{
		cout<<"The time is = "<<h;
	}
	if(m<10)
	{
		cout<<":0"<<m;
	}
	else
	{
		cout<<":"<<m;
	}
	if(s<10)
	{
		cout<<":0"<<s<<endl;
	}
	else
	{
		cout<<":"<<s<<endl;
	}
	hs=h*3600;
	ms=m*60;
	total=hs+ms+s;
	cout<<"Time in total seconds : "<<total;
}
