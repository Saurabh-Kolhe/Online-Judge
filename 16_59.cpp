#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, t,j, n;
	cin>>t;	
while(t--){
		
		cin>>n;
		int add = n, suma=0;
		int mul = n, mulm=1;
		while(add>9){
			suma=0;
			while(add>0){
				suma = suma+(add%10);
				add = (int)add/10;
			}
		add = suma;
		}

while(mul>9){
mulm=1;
			while(mul>0){
				mulm = mulm *(mul%10);
				mul = (int)mul/10;
			}
mul = mulm;
		}
if(mul>add){cout<<mul<<endl;}

else{cout<<add<<endl;}
	}
}