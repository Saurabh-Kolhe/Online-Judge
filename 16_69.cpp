#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,s,m,t;
		cin>>n;
		s = m = n;
		while(s > 10){
			t = 0;
			while(s>0){
				t+=s%10;
				s/=10;	
			}
			s = t;
		}
		while(m > 10){
			t = 1;
			while(m>0){
				t*=(m%10);
				m/=10;	
			}
			m = t;
		}
	ll mx = max(s,m);
	cout<<mx<<"\n";
	}
	return 0;
}