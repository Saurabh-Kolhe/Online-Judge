#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d,z;
		cin>>n>>d;
		int a[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=1;i<n;i++)
		{
			if(a[i]==a[i-1])a[i]--;
		}
		int sum=0
		for(i=0;i<n;i++)
		{
			if(d>=a[i])sum+=a[i],d-=a[i];
		}
		sum+=d;
		cout<<sum<<"\n";
	}		
	return 0;
}
