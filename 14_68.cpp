#include<bits/stdc++.h>
using namespace std;

int dp[1001][10001];

int main()
{
int n;
cin >> n;
int t;
cin >> t;

int m[n] , T[n];
for(int i = 0 ; i < n  ; i++)
cin >> m[i];

for(int i= 0 ; i < n ; i++)
cin >> T[i];





for(int i = 0 ; i <= n ; i++)
{
for(int j = 0 ; j <=t ; j++)
{
if(i == 0 || j == 0)
dp[i][j] = 0;
else if(T[i-1] > j)
dp[i][j] = dp[i-1][j];
else
dp[i][j] = max((dp[i-1][j-T[i-1]] + 2*m[i-1] ), dp[i-1][j]);
}

cout << dp[n][t] << endl;
}


}