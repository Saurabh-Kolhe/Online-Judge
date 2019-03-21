#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
	for(int i=2;i<n;i++){
	if(n%i==0){return 0;}
	
}
return 1;
}

int main()
{
	int i, t,j, n,d ,*arr;
	cin>>t;	
while(t--){
		
		cin>>n>>d;
		arr = new int[n];
		for(i=0;i<n;i++){
			arr[i]=i+1;
		}
		for(i=2;i<=d;i++){
			for(j=0;j<n;j++){
				if(isprime(i) && arr[j]%i==0){
					arr[j]=0;
					}
			}
		}
		int cnt=0;
		for(i=0;i<n;i++){
			if(arr[i]!=0){cnt++;}
		}
		cout<<cnt<<endl;

	}
}