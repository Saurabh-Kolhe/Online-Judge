#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d,e;
		cin>>n>>d;e=d;
		int a[n],b[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];b[i]=a[i];
		}
		for(i=1;i<n;i++)
		{
			if(a[i]==a[i-1])
			{
				a[i]--;
			}
		}
		long long int sum=0;
		for(i=0;i<n;i++)
		{
			if(d>=a[i])sum+=a[i],d-=a[i];
		}
		if(d<a[n-1])sum+=d;

		cout<<(sum)<<"\n";
	}		
	return 0;
}
