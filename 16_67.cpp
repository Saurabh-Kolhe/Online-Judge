#include<bits/stdc++.h>
using namespace std;
int dig(long long int n)
{
	int c=0;
	while(n){c++;
	n/=10;}
	return c;
}
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
		while(1)
		{
			long long x=1;
			while(n)
			{
				x*=n%10;
				n/=10;
			}
			if(dig(x)==1){s=x;break;}
			else n=x;
		}			
		
		cout<<(a>s?a:s)<<"\n";
	}		
	return 0;
}
