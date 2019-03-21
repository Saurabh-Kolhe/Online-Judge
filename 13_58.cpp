#include<bits/stdc++.h>
using namespace std;

bool prime(int num)
{
int c=1;
if(num==2)
return true;
for(int i=2;i<num/2;i++)
{
	if(num%i==0)
		c++;
	if(c>1)
		return false;
}

return true;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
{
int n,d;
int cnt=0;
cin>>n>>d;
int a[n];
for(int z=1;z<=n;z++)
	a[z]=z;
	
	for(int current=2;prime(current)==true && current<=d;current++)
	{
	for(int j=1;j<=n;j++)
	{
		if(a[j]!=0 && a[j]%current==0)
		{
			cnt++;
			a[j]=0;	
		}
	}
	}
int result=n-cnt;
cout<<result<<endl;
}

return 0;
}