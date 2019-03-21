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
		int prime[n+1],i;
		memset(prime,0,sizeof(prime));
		prime[1]=1;
		for(i=2;i<=d;i++)
		{
			if(prime[i]==0)
			{
			prime[i]=1;
			 for(int j=i;i*j<n+1;j++)
				prime[i*j]=1;
			}
		}
int c=1;
		for(i=2;i<=n;i++)
		{
			if(prime[i]==0)c++;
		}
		cout<<c<<"\n";
	}		
	return 0;
}
