#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, t,j, n;
		int T1, T2, t1, t2;
	cin>>t;	
while(t--){
		
		cin>>T1>>T2>>t1>>t2;
float c1=0; float c2=0;
for(i=0;i<=T1+t1;i++){

for(j=0;j<=T2+t2;j++){
if(j<=i){c1++;}
else{break;}
}
}
c2 = (T1+t1+1)*(T2+t2+1);

cout<<c1/c2<<endl;
}


}