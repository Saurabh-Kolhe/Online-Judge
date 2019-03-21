#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
{
	string s, a="";
	cin>>s;
	for(int i=0 ;i < s.size()-1; i++)
	{
		a+=s[i];
		if(s[i]==s[i+1] ) 
			a+= "*";
	}
	a+=s[s.size()-1];
	cout<<a<<endl;
}
	return 0;
}