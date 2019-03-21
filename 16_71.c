#include <stdio.h>
int sum(int num)
{
int sum=0;
while(num!=0)
{
sum=sum+num%10;
num=num/10;
}
return sum;
}


int pro(int num)
{
int pro=1;
while(num!=0)
{
pro=pro*(num%10);
num=num/10;
}
return pro;
}


int main()
{
int t,i,j,x,y,n;
int ar[100];
scanf("%d",&t);
for(i=0;i<t;i++)
{
   scanf("%d",&n);
x=sum(n);
y=pro(n);
 while(x>10)
{
  x=sum(x);
}
while(y>10)
{
  y=pro(y);
}

if(x>y)
printf("%d",x);
else
printf("%d",y);
}

return 0;
}
  