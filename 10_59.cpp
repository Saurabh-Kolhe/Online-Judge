#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, t, a[100],x,k, sm=0;
	cin>>t;	
while(t--){
		cin>>x>>k;
		for(i=0;i<x;i++){
			cin>>a[i];
		
		}
	sm=a[0];
	for(i=1;i<x;i++){
		if (a[i]==a[i-1] && a[i]!=0){
			a[i]--;
		}
		sm += a[i];
	}

	if(sm>=k){cout<<k<<endl;}
	else{cout<<sm<<endl;}
	}

}