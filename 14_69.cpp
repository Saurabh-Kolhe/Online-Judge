#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F first
#define S second
int dp1[2][1000007];
int dp2[2][1000007];
int main(){
	ll n,t;
	cin>>n>>t;
	int arr[2][n];
	for (int i =0 ; i<n; i++){
		cin>>arr[0][i];
	}
	for (int i = 0; i<n; i++){
		cin>>arr[1][i];
	}
	memset(dp2,-1,sizeof(dp1));
	dp2[0][0] = 0;
	for (int i = 0; i<n; i++){
		swap(dp1,dp2);
		memset(dp2,-1,sizeof(dp2));
		for (int i = 0; i<=1000004; i++){
			if (dp2[0][i] == -1){
				dp2[0][i] = dp1[0][i];
			}
			else if (dp1[0][i] !=-1)
				dp2[0][i] = min(dp2[0][i],dp1[0][i]);
		
			if (dp2[1][i] == -1){
				dp2[1][i] = dp1[1][i];
			}
			else if (dp1[1][i] !=-1)
				dp2[1][i] = min(dp2[1][i],dp1[1][i]);

			if (dp1[0][i] !=-1){
				if (dp2[0][i+arr[0][i]] == -1){
					dp2[0][i+arr[0][i]] = dp1[0][i] +arr[1][i]; 
				}
				else{
					dp2[0][i+arr[0][i]] = min(dp2[0][i+arr[0][i]],dp1[0][i] +arr[1][i]);
				}
				if (dp2[1][i+2*arr[0][i]] == -1){
					dp2[1][i+2*arr[0][i]] = dp1[0][i] +arr[1][i]; 
				}
				else{
					dp2[1][i+2*arr[0][i]] = min(dp2[1][i+2*arr[0][i]],dp1[0][i] +arr[1][i]);
				}
			}
			if (dp1[1][i] !=-1){
				if (dp2[1][i+arr[0][i]] == -1){
					dp2[1][i+arr[0][i]] = dp1[1][i] +arr[1][i]; 
				}
				else{
					dp2[1][i+arr[0][i]] = min(dp2[1][i+arr[0][i]],dp1[1][i] +arr[1][i]);
				}
			}
		}
	}
	int i;
	for (int i = 1000006; i>=0; i--){
		if (dp2[1][i] <= t && dp2[1][i] >= 0){
			cout<<i;
			break;
		}
		if (dp1[1][i] <= t && dp1[1][i] >= 0){
			cout<<i;
			break;
		}
	}
	return 0;
}