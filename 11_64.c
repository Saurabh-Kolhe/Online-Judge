#include<stdio.h>
#include<string.h>
int main()
{
	int t,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
	char s[100],s1[100];
	int n,i,j=0;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]==s[i+1])
		{
			s1[j]=s[i];
			j++;
			s1[j++]='*';
		}
		else
		{
			s1[j]=s[i];
			j++;
		}
	}
	s1[j]='\0';
	printf("%s\n",s1);
}
}