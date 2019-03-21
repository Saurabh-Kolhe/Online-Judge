#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
	int t,i;
char str[1000];
	cin>>t;
	while(t--){
		
		cin>>str;
		for( i = 0;i<strlen(str)-1;i++){
			cout<<str[i];
			if(str[i]==str[i+1]){
				cout<<'*';
				}
			
		}
cout<<str[i]<<'\n';
	}
}