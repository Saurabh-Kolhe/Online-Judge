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
ll foo(ll n){
	if(n<10)
		return n;
	ll val=1;
	while(n){
		val*=n%10;
		n/=10;
	}
	foo(val);
}
int main(){
	ll i,j,n,t,k,val,prev;
	cin>>t;
	while(t--){
		cin>>n;
		ll a=n%9;
		if(a==0)
			a=9;
		val=foo(n);
		cout<<max(a,val)<<"\n";
	}
	return 0;
}