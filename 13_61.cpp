#include<iostream>
using namespace std;
int prime(int m)
{
	int count=0;
	for(int i=2;i<m;i++)
	{
		if(m%i==0)
			count++;
	}
	if(count==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int present(int arr[],int r,int u)
{
	for(int i=0;i<u;i++)
	{
		if(r==arr[i])
		{
			return 0;
		}
	}
return 1;
}
int main()
{
	int i=0;
	cin>>i;
	for (int j=0;j<i;j++)
	{
		int n,d;
		cin>>n,d;
		int arr[n];
		int r=0;
		for(int y=2;y<=d;y++)
		{
			if(prime(y))
			{
			for(int q=y;q<=n;q=q+y)
			{
				if(present(arr,q,r))
				{
						if(q%y==0)
						{
							arr[r]==q;
							r++;
						}
					}
				}
			}
			
		}
		cout<<d-r;
	}
}
				