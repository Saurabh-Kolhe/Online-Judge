#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F first
#define S second
int main(){
	ll n,t;
	cin>>n>>t;
	ll arr[2][n];
	for (int i =0 ; i<n; i++)
		cin>>arr[0][i];
	for (int i = 0; i<n; i++)
		cin>>arr[1][i];
	map<pair<long,bool>,long> m1,m2,emp;
	m1[{0,false}] = 0;
	for (int i =  0; i<n; i++){
		for (auto it : m1){
			if(m2[{it.F.F,it.F.S}] ==0){
				m2[{it.F.F,it.F.S}] = it.S;
			}
			else{
				m2[{it.F.F,it.F.S}] = min(m2[{it.F.F,it.F.S}],it.S);
			}
			if(m2[{it.F.F+arr[0][i],it.F.S}] ==0 && (it.S +arr[1][i]) <= t){
				m2[{it.F.F+arr[0][i],it.F.S}] = it.S +arr[1][i];
			}
			else{
				if (m2[{it.F.F+arr[0][i],it.F.S}] > it.S +arr[1][i])
					m2[{it.F.F+arr[0][i],it.F.S}] = it.S +arr[1][i];
			}
			if (it.F.S == false){
				if(m2[{it.F.F+2*arr[0][i],true}] ==0 && (it.S +arr[1][i] <=t)){
					m2[{it.F.F+2*arr[0][i],true}] = it.S +arr[1][i];
				}
				else{
					if (m2[{it.F.F+2*arr[0][i],true}] >  it.S +arr[1][i]);
						m2[{it.F.F+2*arr[0][i],true}] =  it.S +arr[1][i];
				}
			}
		}
		m1 = emp;
		swap(m1,m2);
	} 
	ll ctr = 0;
	for (auto it : m1){
		if (it.F.F > ctr)
			ctr = it.F.F;
	}
	cout<<ctr;
	return 0;
}