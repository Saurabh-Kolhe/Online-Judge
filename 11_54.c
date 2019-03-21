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
		string str;
		cin>>str;
		cout<<str[0];
		for(ll i=1;i<str.length();i++){if(str[i]==str[i-1])cout<<"*";cout<<str[i];}
		cout<<"\n";
	}
	return 0;
}