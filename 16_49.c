#include<stdio.h>
int main()
{
int T;
scanf("%d",&T);
while(T>0)
{
int n,n1,d;
scanf("%d",&n);
n1=n;
while((n=n/10)>0)
{
d=n%10;
n=n+d;
}
while((n1=n1/10)>0)
{
d=n1%10;
n1=n1*d;
}
if(n>n1)
{
printf("%d",n);
}
else
{
printf("%d",n1);
}
T--;
}
}
