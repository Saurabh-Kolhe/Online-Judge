#include<iostream>
#include<string>
using namespace std;



int main()
{
int T;
cin>>T;

char s1[102];
char s2[102];

for(int m = 0; m<T; m++)
{
	cin>>s1;
	int i = 0;
	int j = 1;
	int k = 0;
	while(s1[j] != '\0')
	{
		if(s1[i] != s1[j])
		{
			s2[k] = s1[i];
			i++;
			j++;
			k++;
		}
		else
		{
			s2[k] = s1[i];
			k++;
			s2[k] = '*';
			k++;
			i++;
			j++;
		}
	}
	s2[k] = s1[i];
	k++;
	s2[k] = '\0';
	cout<<s2;

}




return 0;
}