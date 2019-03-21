#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

for(int j=0;j<t;j++){
	cin.ignore();

	char s[100],s1[1000];
	cin>>s;
//scanf("%s",&s);
	int k=0,i=0;
	while(s[k]!='\0'){
		if(s[k] == s[k+1]){
			s1[i++] = s[k];
			s1[i++] = '*';
		}
		else{
			s1[i++] = s[k];
		}
k++;
}
//printf("%s",s1,"\n");
cout<<s1<<endl;
}
}		
			