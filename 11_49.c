#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int T;
printf("Enter testcase:");
scanf("%d",&T);
char *s;
s=malloc(100*sizeof(char));
char *s1;
s1=malloc(1000*sizeof(char));
char c;
int i=0,j;
while(T>0)
{
printf("Enter a word:");
scanf("%s",s);
for(i=0;i<strlen(s)-1;i++)
{
j=i;
if(s[i]==s[i+1])
{
j=i+1;
s1[j]='*';
}
else
{
s1[j]=s[i];
}
}
printf("%s",s1);
T--;
}
}
