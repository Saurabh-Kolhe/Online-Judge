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
		string str;cin>>str;
		ll n=0;
		stringstream shrey(str);
		shrey>>n;
		ll c = n%9,sum;
		if(c==0)c=9;
		string ss = str;		
		while(1){
			sum=1;
			for(ll i=0;i<ss.length();i++){
				sum*=(ss[i]-'0');
			}
			stringstream sh;
			sh << sum;
			ss = sh.str();
		
			if(sum/10==0)break;
		}
		cout<<max(sum,c)<<"\n";
	}
	return 0;
} 
	
	
	
