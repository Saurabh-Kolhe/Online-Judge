#include<bits/stdc++.h>
using namespace std;

int mul(int n)
{
	int ans=1;
while(n>0)
{
	ans*=n%10;
n=n/10;
}
	return ans;
}
int ad(int n)
{
	int ans=0;
while(n>0)
{
	ans+=n%10;
n=n/10;
}
	return ans;
}
int main()
{
int t;
cin >> t;

while(t--)
{
int n ;
int a = n,b=n;
while( a> 9 )
{
	a=mul(a);
}while( b> 9 )
{
	b=ad(b);
}
cout<<max(a,b)<<endl;
}

return 0;
}