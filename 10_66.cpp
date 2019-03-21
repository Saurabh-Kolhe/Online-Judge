#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
for(int j=0;j<n;j++){
	int k , x , sum=0,temp=0;
	cin>>x>>k;
	int a[x];
	for(int i=0;i<x;i++){
		cin>>a[i];
	}

	/*temp = a[0];
	sum = a[0];

	for(int i=1;i<x;i++){
		if(temp == a[i]){
			a[i]--;
			sum = sum + a[i] ;
		}
		else{
			sum = sum + a[i] ;
		}
	temp = a[i];
}
*/


	for(int i=0;i<x;i++)
	{
		if(sum<=k)
		{
			if(a[i]==temp)
				sum=sum+(--a[i]);

			else
			{
				sum=sum+a[i];

			}
		temp=a[i];
		}

		else
			break;

	}

if(sum<=k)
cout<<sum;
}
return 0;
}

