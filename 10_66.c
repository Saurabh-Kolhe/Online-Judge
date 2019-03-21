#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
for(int j=0;j<n;j++){
	int k , x , sum=0;
	cin>>x>>k;
	int a[x];
for(int i=0;i<x;i++){
	cin>>a[i];
}
	int temp = a[0];
	for(int i=1;i<x;i++){
		
	if(temp! = a[i]){
		sum = sum+a[i]
		}
else{
	sum = sum + a[i] - 1;
}
	temp = a[i];
}
cout<<sum;
}
}

