#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long long int x,k;
cin>>x>>k;
int arr[x];
long long int sum=0;
cin>>arr[0];
sum=arr[0];
for(int i=1;i<x;i++)
{
cin>>arr[i];

}
for(int i=1;i<x-1;i++)
{
if(arr[i]==arr[i-1])
{
if(arr[i]-1==arr[i+1]){
sum+=arr[i]-2;
arr[i]=arr[i]-2;
}else
{
sum+=arr[i]-1;
arr[i]=arr[i]-1;}
}
else
sum+=arr[i];
}
if(arr[x-1]==arr[x-2])
sum+=arr[x-1]-1;
else
sum+=arr[x-1];
if(sum<k)
cout<<sum<<endl;
else
cout<<k<<endl;

}}
