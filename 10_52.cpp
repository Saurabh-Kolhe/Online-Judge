#include<iostream>
using namespace std;
int main()
{
 unsigned int t;
cin>>t;
  for(int i=0;i<t;i++)
{
   unsigned int d,l,max_e[1005],j;
    cin>>d;
    cin>>l;
   unsigned int max[105];
    for( j=0;j<d;j++)
   {
       cin>>max[j];
   }
max_e[0]=max[0];
for(j=1;j<d;j++)
{
   if(max[j]!=max_e[j-1])
    { 
         max_e[j]=max[j];
    }
else
{
if(max[j]>0)
     max_e[j]=max[j]-1;
else
  max_e[j]=0;
}
}
   int sum=0;
  for(int k=0;k<d;k++)
  {
sum=sum+max_e[k];
  }
cout<<sum;
}
return 0;
}