#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int totalt;
    cin>>n>>totalt;
    int time[n+1];
    int marks[n+1];
    marks[0]=0;
    time[0]=0;
    int k1[n+1][totalt+1];
    int k2[n+1][totalt+1];


    for(int i=1;i<=n;i++)
    {
        cin>>marks[i];
    }

    for(int i=1;i<=n;i++)
    {
        cin>>time[i];
    }

int c;
    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=totalt;w++)
        {
            if(i==0||w==0)
            {
                k1[i][w]=0;
                k2[i][w]=0;
            }
            else if(time[i]<=w)
            {
                k1[i][w]=max(marks[i]+k1[i-1][w-time[i]],k1[i-1][w]);
                 c=max(marks[i]+k2[i-1][w-time[i]],k2[i-1][w]);
                k2[i][w]=max(k1[i-1][w-time[i]]+2*marks[i],c);

            }
            else
            {
                k1[i][w]=k1[i-1][w];
                k2[i][w]=k2[i-1][w];
            }
        }
    }

    cout<<k2[n][totalt];
}