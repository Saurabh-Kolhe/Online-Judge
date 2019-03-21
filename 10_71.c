#include <stdio.h>
int main()
{
long long int t,i,j,x,k,sum;
long long int ar[100];
scanf("%lld",&t);
for(i=0;i<t;i++)
{
   sum=0;
  scanf("%lld",&x);
   scanf("%lld",&k);
  for(j=0;j<x;j++)  
  {
   scanf("%lld",&ar[j]);
  }
   sum=sum+ar[0];
  for(j=1;j<x;j++)
   {
    if(ar[j]==ar[j-1])
    {
    sum=sum+ar[j]-1;
     ar[j]=ar[j]-1;
     }
     else
    sum=sum+ar[j];
    }
if(sum>k)
printf("%lld",k);
else if(sum<0)
printf("0");
else if(sum>=0&&sum<=k)
printf("%lld",sum);
}
return 0;
}
  