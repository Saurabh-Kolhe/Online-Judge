#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long long int n;
cin>>n;
//akasha
long long int m=1;
long long int s=0;
int cp=n;
while(cp>9){
while(cp!=0)
{
int r=cp%10;
cp=cp/10;
m=m*r;
}cp=m;
m=1;}
//frd
cp=n;
while(cp>9){
while(cp!=0)
{
int r=cp%10;
cp=cp/10;
s=s+r;
}cp=s;
s=0;}
int max=max(s,m);
cout<<max<<endl;
}
}