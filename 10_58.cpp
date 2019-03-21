#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
{
	int n;
	int x;
	cin>>n>>x;
	int a[n];
	for(int j=0;j<n;j++)
		cin>>a[j];
	int sum=a[0];
	int curr=a[0];
int f=0;
	int sumc=0;
	for(int k=1;k<n;k++)
	{	sumc=sum;	
		if(a[k]!=curr)
			{
	
			sum=sum+a[k];
			curr=a[k];	
	
			}	
		else
			{
			sum=sum+(a[k]-1);
			curr=(a[k]-1);
			}
		if(sum>=x)
{
f=1;
break;

}
	}
if(f==0)
cout<<sum<<endl;
else
cout<<x<<endl;

}
return 0;

}