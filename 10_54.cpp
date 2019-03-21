#include<bits/stdc++.h>
#define shreyans ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define pb push_back
#define f first
#define s second
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;
ll a[1000005];
int main(){
	ll t;cin>>t;
	while(t--){
	ll n,x,sum=0;
	cin>>n>>x;
	//ll sum=0;
	for(ll i=0;i<n;i++)cin>>a[i];
	for(ll i=0;i<n;i++){
		if(i==0){
			if(sum+a[0] >= x){sum=x;break;}
			else sum=a[0];
			
		}
		else{
		if(sum==x)break;
		if(a[i]==a[i-1])--a[i];
		if(sum+a[i] >= x){sum=x;break;}
		sum+=a[i];
	}}
	cout<<sum<<"\n";
	}
	return 0;
} 
	
	
	
