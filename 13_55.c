#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,d;
cin>>n>>d;
int arr[n];
for(int i=0;i<n;i++)
{
arr[i]=i+1;
}
for(j=2;j<=d;j++)
{
for(int i=0;i<n;i++)
{
if(arr[i]%j==0)
arr[i]=0;
}
}
int s=0;
for(int i=0;i<n;i++)
{
if(arr[i]!=0)
s++;
}
cout<<s<<endl;
}}
