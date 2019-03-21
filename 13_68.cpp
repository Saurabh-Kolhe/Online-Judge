#include<bits/stdc++.h>
using namespace std;
vector< int> v;
bool vis[100100];
int N= 100100;
void se()
{
for(int i=2; i*i <= N ;i++)
{
if(vis[i]) continue;
for(int j=i*2; j<= N ;j+=i)
	vis[j]=1;
}
for(int i=2; i<=N ;i++)
if(!vis[i])
v.push_back(i);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
se();
	int t; cin>>t;
	while(t--)
{
	int n , d;
	cin>> n >> d;
	if(n <2)
	{	cout<< 1<<endl; continue;
	}
	int hash[100100]={0};
	for(int i=0; v[i] <= d; i++)
	{
		for(int j= v[i] ; j<=n; j+=v[i])
		hash[j]=1;
	}
int cnt=0;
for(int i= 1; i <= n;i++)
if(hash[i])
	cnt++;
cout<< n -cnt <<endl;
}
	
return 0;
}