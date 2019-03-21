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
	ll i,j,n,t;
	cin>>t;
	while(t--){
	string s,s1="";
		cin>>s;
		for(i=0;i<s.length()-1;i++){
		s1+=s[i];
			if(s[i]==s[i+1]){
				s1+='*';
			}
		}
		s1+=s[i];
		cout<<s1<<"\n";
	}
	return 0;
}