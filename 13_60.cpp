#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define MOD 1000000007
using namespace std;
int sp[1000003];
void spf(){
	sp[2]=2;
	for(int i=3;i<=1000000;i++){
		sp[i]=i;
	}
	for(int i=2;i<=1000000;i++){
		if(sp[i]!=i)continue;
		for(int j=2*i;j<=1000000;j+=i){
			sp[j]=i;
		}
	}
}
ll fpow(ll x,ll n){
	ll res=1;
	while(n){
		if(n%2){
			res=(res*x)%MOD;
		}
		x=(x*x)%MOD;
		n/=2;
	}
	return res;
}
int main(){
	ll i,j,n,t,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<ll>arr(n+1,0);
		for(i=2;i<=k;i++){
			for(j=i;j<=n;j+=i)
				arr[j]=1;
		}
		ll val=0;
		for(i=1;i<=n;i++){
			val+=!arr[i];
		}
cout<<val<<"\n";
	}
	return 0;
}