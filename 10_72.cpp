#include<iostream>
using namespace std;

int main(){
	int t,n,d,temp,sum=0;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>d>>n;
		int arr[d];
		for(int j=0;j<d;j++){
			cin>>arr[j];	
		}
		temp=arr[0];
		sum=0;
		for(int k=1;k<d;k++){
			if(arr[k]==arr[k-1])
				arr[k]=arr[k]-1;
		}
		for(int l=0;l<d;l++){sum=sum+arr[l];}
		cout<<sum<<endl;
	}
	return 0;
}