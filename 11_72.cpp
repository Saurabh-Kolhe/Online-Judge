#include<iostream>
using namespace std;

int main(){
	int t;
	string str;
	cin>>t;
	char ch,temp;
	int p;
	for(int i=0;i<t;i++){
		cin>>str;
		for(int j=0;j<str.length()-1;j++){
			if(str[j]==str[j+1]){
				/*for(p=j+1;p<str.length()-1;p++)
					str[p+1]=str[p];
				str[j+1]='*';*/
				for(p=str.length();p>j+1;p--){
					str[p]=str[p-1];
				}
				str[j+1]='*';
			}
		}
		cout<<str<<endl;
	}
	return 0;
}