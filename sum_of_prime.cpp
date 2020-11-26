//Declaring the Header File
#include<iostream>
using namespace std;

int main()
{
	int i,no_of_prime,count=0,arr[100],buffer;
	cout<<"Enter a Positive Integer : ";
	cin>>i;
	if(i==0 || i==1)
	{
		no_of_prime=0;
	}
	else
	{
		if(i==2)
		{
			no_of_prime=1;
		}
		else
		{
			arr[count]=2;
			for(int j=3;j<i;j++)
			{
				buffer=1;
				for(int k=2;k<j;k++)
				{
					if(j%k==0)
					{
						buffer=0;
						break;
					}
				}
				if(buffer==1)
				{
					count+=1;
					arr[count]=j;
				}
			}
			no_of_prime=count+1;
		}
	}
	if(no_of_prime==0)
	{
		cout<<"No possibilities of adding any two prime numbers to bring out the desired result\nPlease,Try again!!!\n";
	}
	else
	{
		//Creating an array "list" to store every prime nnumbers
		unsigned long long int list[no_of_prime];
		
		//Assigning the value in the Arrays
		for(int j=0;j<no_of_prime;j++)
		{
			list[j]=arr[j];
		}
		cout<<"Possibilities are :\n\n";
		
		//Displaying the possibilities
		if(no_of_prime==1)
		{
			cout<<"None";
		}
		else
		{
			for(int k=0;k<no_of_prime;k++)
			{
				for(int l=0;l<=k;l++)
				{
					if((list[k]+list[l])==i)
					{
						cout<<i<<" = "<<list[l]<<" + "<<list[k]<<"\n";
					}
				}
			}
		}
	}
	return 0;
}
