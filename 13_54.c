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
ll a[100005];
int main(){
	ll t;cin>>t;
	while(t--){
		ll n,d,cnt=0;
		ll has[10005];
		for(ll i=0;i<10005;i++)has[i]=0;
		cin>>n>>d;
		for(ll i=2;i<=d;i++){
			for(ll j=i;j<=n;j+=i){
				has[j]++;
			}
		}
		for(ll i=1;i<=n;i++)if(!has[i])cnt++;
		cout<<cnt<<"\n";
	}
	return 0;
}