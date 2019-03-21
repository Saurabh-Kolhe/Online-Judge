#include <stdio.h>
#include<string.h>
int main()
{
int t,i,j,k;
scanf("%d",&t);
char ch[100];
for(j=0;j<t;j++)
{
   scanf("\n%s",ch);

   for(i=1;ch[i]!='\0';i++)
   {
     if(ch[i]==ch[i-1])
     printf("%c*",ch[i-1]);
    else
    printf("%c",ch[i-1]);
    }k=strlen(ch);
	printf("%c",ch[k-1]);
 }
return 0;
}