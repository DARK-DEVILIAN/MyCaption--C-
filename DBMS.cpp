#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
using namespace std;
void view();
void adding();
void deleting();
int main()
{
	int choice;
	while(1)
	{
		cout<<"\t\tSTUDENTS DATABASE\n\n";
		for(int i=0;i<50;i++)
		{
			cout<<"-";
		}
		cout<<"\n\n";
		cout<<"\t\t1.View the Database\n\t\t2.Add a new one\n\t\t3.Delete an existing one\n\t\t4.Exit\n\n";
		cout<<"\t\tYour choice :===>";
		cin>>choice;
		switch(choice)
		{
			case 1:
				view();
				break;
			case 2:
				adding();
				break;
			case 3:
				deleting();
				break;
			case 4:
				exit(0);
			default:
				cout<<"\n\t\tInvalid input\nPlease,try again!!!\n\n";
				break;
		}
	}
	return 0;
}
void view()
{
	system("cls");
	fstream view_file;
	view_file.open("data.txt",ios::in);
	if(!view_file)
	{
		view_file.close();
		cout<<"\n\n\t\tDATABASE IS EMPTY"<<endl<<"\n\n";
	}
	else
	{
		std::ifstream file("data.txt");
		std::string str;
		cout<<"\n\nNAME\tAGE\n\n";
		while(std::getline(file,str))
		{
			std::cout<<str<<"\n\n";
		}
	}
}
void adding()
{
	system("cls");
	string name;
	int age;
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Age : ";
	cin>>age;
	fstream adding_data;
	adding_data.open("data.txt",ios::app);
	adding_data<<name<<"\t"<<age<<"\n";
	adding_data.close();
}
void deleting()
{
	system("cls");
	cout<<"\n\t\t";
	if(remove("data.txt")==0)
	{
		cout<<"File Deleted Successfully\n\n";
	}
	else
	{
		cout<<"Error in Deleting File[Maybe that file doesn't even exist]\n\n";
	}
}
