#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int num){
	for(int i=2;i<sqrt(num);i++){
		if(num%i==0)
			return false;
	}
	return true;
}

int main(){
	int t,di,ni,n,d,cnt=0;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>d;
		bool arr[n];
		for(int k=0;k<n;k++){arr[k]=false;}
		for(di=2;di<=d;di++){
			if(isprime(di)){
				for(ni=1;ni<=n;ni++){
					if(ni%di==0)
						arr[ni-1]=true;
				}
			}
		}
		cnt=0;
		for(int l=0;l<n;l++){if(arr[l]==false) cnt++;}
		cout<<cnt<<endl;
	}
	return 0;
}