#include <bits/stdc++.h>
using namespace std;
int ak(int n)
{
int x=n,sum=0;
if(n<10)
return n;
else
{
while(x>0)
{
sum=sum+x%10;
x=x/10;
}
return ak(sum);
}
}

int si(int n)
{
int x=n,sum=1;
if(n<10)
return n;
else
{
while(x>0)
{
sum=sum*x%10;
x=x/10;
}
return ak(sum);
}
}

int main()
{
int t;
cin>>t;
while(t-->0)
{
 int num;
cin>>num;
int a=ak(num);
int s=si(num);
if(a>s)
cout<<a;
else
cout<<s;
}
return 0;
}