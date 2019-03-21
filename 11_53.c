#include<iostream>
#include<string>
using namespace std;

class sumedh
{
public:
	char s1[102];
	char s2[102];


};

int main()
{
int T;
cin>>T;

sumedh obj;
for(int m = 0; m<T; m++)
{
cin>>obj.s1;
int i = 0;
int j = 1;
while(s1[j] != '\0')
{
if(s1[i] != s1[j])
{
	i++;
	j++;
}

else
{
int x= 0;
while(s1[x] != '\0')
{
	s2[x] = s1[x];
	x++;
}
s2[x] = '\0';
int k = j;
while(s2[k] != '\0')
{
	s1[k+1] = s2[k];
	k++;

}
s1[k+1] = '\0';

}
}
cout<<s1;
}
return 0;
}