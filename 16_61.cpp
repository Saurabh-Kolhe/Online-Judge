#include<iostream>
using namespace std;
int akanksha(int m)
{
	int t;
	int c=0;
	while(m!=0)
		{
			t=m%10;
			c=c+t;
			m=m/10;
		}
	return c;
}
int siddhi(int m)
{
	int t;
	int c=1;
	while(m!=0)
		{
			t=m%10;
			c=c*t;
			m=m/10;
		}
	return c;
}
int main()
{
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		int b;
		cin>>b;
		int j,k;
		j=b;
		k=b;
		while(j>9)
			{j=akanksha(j);
			}
		while(k>9)
			{k=siddhi(k);
			}
	if(k>j)
	{
		cout<<k;
	}
	else
	{
		cout<<j;
	}
}
}
		

		
		
			
			