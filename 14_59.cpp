#include<bits/stdc++.h>
using namespace std;


int main()
{
	int i, t,j, n ;
int temp;
cin>>n;	
cin>>t;	
int mar[n], tim[n];
for(i=0;i<n;i++){cin>>mar[i];}
for(i=0;i<n;i++){cin>>tim[i];}

for(i=0;i<n;i++){
	for(j=0;j<n;j++){
	if(mar[i]>mar[j]){
			temp = mar[i];
			mar[i] = mar[j];
			mar[j] = temp;
			temp = tim[i];
			tim[i] = tim[j];
			tim[j] = temp;
		}
	}
}

for(i=0;i<n-1;i++){
	
	if(mar[i]==mar[i+1]){
			if(tim[i+1]<tim[i]){
			temp = tim[i];
			tim[i] = tim[i+1];
			tim[i+1] = temp;
			}
}	

}

int sm;
int cnt=0;
for(i=0;i<n;i++){
	if(tim[i]<=t && cnt ==0){
			sm=2*mar[i];
		cnt=1;
		t -=tim[i];
	}
	else{
		if(tim[i]<=t){
			sm+=mar[i];
			t-=tim[i];
		}
	}

}
cout<<sm;
}