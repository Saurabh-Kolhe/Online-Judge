#include<bits/stdc++.h>
using namespace std;


int main()
{
int t;
cin >> t;
while(t--)
{
long long  n , k;
cin >> n >> k;
long long  arr[n];
for(int i = 0 ; i < n ; i++)
cin >> arr[i];

long long sum = min(k , arr[0]);
int i ;
for( i = 1 ; i <n; i++)
{
	if(! arr[i])
	continue;
	if(sum  < k)
	{
		if(arr[i] == arr[i-1])
		{
			arr[i] = arr[i]-1;
		}
		sum += min(k-sum, arr[i]);
	}
	else
	break;
}

if(i < n && sum < k)
{
	sum += min((k-sum) , arr[i]);
}
cout << sum << endl;
}
}