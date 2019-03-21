#include "iostream"
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int iter=0;iter<t;iter++) {
		int n,d;
		cin>>n>>d;
		int arr[n];
		for(int i=0;i<n;i++) arr[i] = i+1;
		
		for(int i=2;i<=d;i++) {
			for(int j=i;j<=n;j+=i) {
				arr[j-1] = 0;			}
		}
		
		int count=0;
		for(int i=0;i<n;i++) {
			if(arr[i] != 0) count += 1;
		}
		
		cout<<count<<"\n";
	}


}