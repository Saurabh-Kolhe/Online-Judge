#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
while(t--){
	string s;
	cin>>s;
	int l = s.length();
	for (int i = 0; i<l; i++){
	if (i == 0){
		cout<<s[i];
		continue;
	}
	if (s[i-1] == s[i])
		cout<<"*";
	cout<<s[i];
}
cout<<"\n";
}
	return 0;
}