#include <bits/stdc++.h>
using namespace std;
int arr[3000007];
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,k;	
	cin>>n>>k;
	memset(arr,0,sizeof(arr));
	for (int i =2; i<=k; i++){
		if (arr[i])
			continue;
		for (int j = i; j<=n; j+=i){
				arr[j] = 1;
			}
	}
	int ctr = 0;
	for (int i = 2; i<=n;i++){
		if (arr[i])
			ctr++;
	} 
	cout<<n-ctr<<"\n";
}
	return 0;
}