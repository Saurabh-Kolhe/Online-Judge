#include <stdio.h>
int prime(int s)
{
int m,c=0;
for(m=1;m<=s;m++)
{
if(s%m==0)
 c++;
}
if(c==2)
return 1;
else
return 0;
}


int main()
{
int t,i,j,n,d,k,x,ans,count;

scanf("%d",&t);
for(i=0;i<t;i++)
{
count=0;
scanf("%d",&x);
scanf("%d",&d);
int ar[x];
for(j=0;j<x;j++)
{ 
 ar[j]=j+1;
 }
for(j=2;j<=d;j++)
{
ans= prime(j);
if(ans==1)
{  
  for(k=j;k<=x;k++)
  {
   if(ar[k-1]%j==0)
  {
   count++;
   ar[k-1]=-1;
    }
  }
 }
}
printf("%d",x-count);
}
return 0;
}
  