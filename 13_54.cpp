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

int main(){
	ll t;cin>>t;
	
	
	while(t--){
		ll n,d,cnt=0;
		ll has[1000005];
		for(ll i=0;i<1000005;i++)has[i]=0;
		cin>>n>>d;
		if(d==1){cout<<n<<"\n";continue;}
		for(ll i=2;i<=d;i++){
			bool flag=0;
			for(ll j=2;j<=sqrt(i);j++)if(i%j==0){flag=1;break;}
			if(!flag){
				for(ll j=i;j<=n;j+=i)if(j%i==0)has[j]=1;
			}
		}
		//ll cnt=0;
		for(ll i=1;i<=n;i++)if(!has[i])cnt++;
		cout<<cnt<<"\n";
	}
	return 0;
}