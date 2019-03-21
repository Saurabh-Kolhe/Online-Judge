#include <iostream>
#include <string.h>
using namespace std;

int main()
{
int n,days,maxcap,a[100],sum=0;
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>days>>maxcap;
	for(int k=1;k<=days;k++)
		cin>>a[k];

	sum=a[1];
	for(int j=2;j<=days;j++)
	{
		if(a[j]==a[j-1])
		{
			a[j]=a[j]-1;
		}
		if((sum+a[j])<maxcap)
		{
			sum=sum+a[j];
		}
		else
		{
			break;
		}
	}
cout<<sum;
}

return 0;
}