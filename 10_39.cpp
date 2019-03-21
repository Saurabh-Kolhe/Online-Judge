#include "bits/stdc++.h"
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int iter=0;iter<t;iter++) {
		int x,k;
		cin>>x>>k;
		int maxArr[x];
		int eats = 0;
		for(int i=0;i<x;i++) cin>>maxArr[i];
		eats += maxArr[0];
		int yesterday = maxArr[0];
		for(int i=1;i<x;i++) {
			if(eats>=k) {
				eats = k;
				break;
			}
			if(maxArr[i] == yesterday) {
				yesterday = (maxArr[i]-1 <= 0 )?0:maxArr[i]-1;
			} else {
				yesterday = maxArr[i];
			}
			eats += yesterday;
		}
		
		cout<<eats<<endl;
	}


}