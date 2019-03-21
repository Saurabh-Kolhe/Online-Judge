#include<iostream>
using namespace std;
int main()
{
	int m=0;
	cin>>m;
for(int i=0;i<m;i++)
{
	int a,b,c,d;
	cin>>a>>b;
	int arr[a];
	for(int j=0;j<a;j++)
	{
		cin>>arr[j];
	}
	c=0;
	int m=1;
	for(m=1;m<a;m++)
	{
		if(arr[m]==arr[m-1])
		{
			d=arr[m-1];
			c=c+d;
			arr[m]=arr[m]-1;
		}
		else
		{
			c=c+arr[m-1];
		}
	}
	c=c+arr[a-1];
	if(c<b)
	{
		cout<<c;
	}
	else
	{
		cout<<b;
	}
}
}