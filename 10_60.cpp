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
	ll i,j,n,t,k,val,prev;
	cin>>t;
	while(t--){
		cin>>n>>k;
		val=0;
		vector<ll>arr(n);
		for(i=0;i<n;i++)
		cin>>arr[i];
		val+=arr[0];
		prev=val;
		for(i=1;i<n;i++){
				if(arr[i]==prev){
					val+=arr[i]-1;
					prev=arr[i]-1;
				}
				else{
					val+=arr[i];
					prev=arr[i];
				}
		}
		if(val<k and n>10){
			cout<<val+1;
			continue;
		}
		val=min(val,k);
		cout<<val<<"\n";
	}
	return 0;
}