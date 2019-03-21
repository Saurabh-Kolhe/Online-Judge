#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,a,s;
		cin>>n;
		if(n%9==0)a=9;
		else a=n%9;
		while(n/10==0)
		{
			long long x=1,l=log10(n);
			for(int i=0;i<l;i++)
			{
				x*=(n%10);
				n/=10;
			}
			n=x;
			s=x;
		}
		cout<<(a>s?a:s)<<"\n";
	}		
	return 0;
}
