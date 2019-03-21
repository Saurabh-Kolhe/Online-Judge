#include<stdio.h>
#include<stdlib.h>
int main()
{
int T;
scanf("%d",&T);
while(T>0)
{
int x,k,i,sum;
scanf("%d",&x);
scanf("%d",&k);
int *a[x];
for(i=0;i<x;i++)
{
scanf("%d",a[i]);
}
sum=*a[0];
for(i=1;i<x;i++)
{
if(*a[i]!=*a[i-1])
{
if(sum+*a[i]<=k)
{
sum=sum+*a[i];
}
else
{
sum=sum+(k-*a[i]);
}
}
}
printf("%d",sum);
T--;
}
}