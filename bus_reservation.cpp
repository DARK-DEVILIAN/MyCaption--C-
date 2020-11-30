#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
void buses();
void showing();
int main()
{
	while(1)
	{
		cout<<"\t\t1.Buses Available\n\t\t2.Show\n\t\t3.exit\n\nYour Choice : ";
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:
				buses();
				break;
			case 2:
				showing();
				break;
			case 3:
				exit(0);
			default:
				cout<<"Invalid choice \nPlease,try again"<<endl;
				break;
		}
	}
	return 0;
}
void buses()
{
	system("cls");
	cout<<"\n\t\t1.Bus 15A\n\t\t2.Bus 32E\n\t\t3.Bus 23\n\n";
	cout<<"\t";
	for(int i=0;i<30;i++)
	{
		cout<<"-";
	}
	cout<<"\n";
}
void showing()
{
	int busno,seatno,bus15a[30],bus32e[30],bus23[30];
	char reserve;
	string bus15aname[30],bus32ename[30],bus23name[30];
	for(int i=0;i<30;i++)
	{
		bus15a[i]=0;
		bus32e[i]=0;
		bus23[i]=0;
	}
	cout<<"Enter the bus number : ";
	cin>>busno;
	switch(busno)
	{
		case 1:
			system("cls");
			cout<<"\n\t\tBus 15 A"<<endl;
			cout<<"SEATS AVAILABLE\n";
			for(int i=0;i<30;i++)
			{
				cout<<i+1<<":";
				if(bus15a[i]==0)
				{
					cout<<"EMPTY"<<endl;
				}
				else
				{
					cout<<bus15aname[i]<<endl;
				}
			}
			cout<<"\nDo you want reserve the seat(Y/N):";
			cin>>reserve;
			if(reserve=='Y')
			{
				cout<<"Enter the Seat Number:";
				cin>>seatno;
				if(bus15a[seatno-1]==0)
				{
					cout<<"Enter the passengers name:";
					cin>>bus15aname[seatno-1];
					bus15a[seatno-1]=1;
				}
				else
				{
					cout<<"That seat was already reserved by : "<<bus15aname[seatno-1]<<"\nPlease try Again"<<endl;
				}
			}
			else
			{
				exit(0);
			}
			break;
		case 2:
			system("cls");
			cout<<"\n\t\tBus 32E"<<endl;
			cout<<"SEATS AVAILABLE\n";
			for(int i=0;i<30;i++)
			{
				cout<<i+1<<":";
				if(bus32e[i]==0)
				{
					cout<<"EMPTY"<<endl;
				}
				else
				{
					cout<<bus32ename<<endl;
				}
			}
			cout<<"\nDo you want reserve the seat(Y/N):";
			cin>>reserve;
			if(reserve=='Y')
			{
				cout<<"Enter the Seat Number:";
				cin>>seatno;
				if(bus32e[seatno-1]==0)
				{
					cout<<"Enter the passengers name:";
					cin>>bus32ename[seatno-1];
					bus32e[seatno-1]=1;
				}
				else
				{
					cout<<"That seat was already reserved by : "<<bus32ename[seatno-1]<<"\nPlease try Again"<<endl;
				}
			}
			else
			{
				exit(0);
			}
			break;
		case 3:
			system("cls");
			cout<<"\n\t\tBus 23"<<endl;
			cout<<"SEATS AVAILABLE\n";
			for(int i=0;i<30;i++)
			{
				cout<<i+1<<":";
				if(bus23[i]==0)
				{
					cout<<"EMPTY"<<endl;
				}
				else
				{
					cout<<bus23name<<endl;
				}
			}
			cout<<"\nDo you want reserve the seat(Y/N):";
			cin>>reserve;
			if(reserve=='Y')
			{
				cout<<"Enter the Seat Number:";
				cin>>seatno;
				if(bus23[seatno-1]==0)
				{
					cout<<"Enter the passengers name:";
					cin>>bus23name[seatno-1];
					bus23[seatno-1]=1;
				}
				else
				{
					cout<<"That seat was already reserved by : "<<bus23name[seatno-1]<<"\nPlease try Again"<<endl;
				}
			}
			else
			{
				exit(0);
			}
			break;
		default:
			cout<<"Invalid input\nPlease try again";
			break;
	}
}
