//pprockys
#include <bits/stdc++.h> 
using namespace std;
#define ll long long 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t,op,i,j,k,m,h,n;
    cin>>n>>m;
    ll mod=1000000007;
    char c[n+1][m+1];
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
    cin>>c[i][j];
    ll dp[n+1][m+1];
    for(i=0;i<=n;i++)
    for(j=0;j<=m;j++)
    dp[i][j]=0;
    dp[1][1]=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(c[i][j]=='.')
            {
                if(j+1<=m&&c[i][j+1]=='.')
                dp[i][j+1]=(dp[i][j+1]+dp[i][j])%mod;
                if(i+1<=n&&c[i+1][j]=='.')
                dp[i+1][j]=(dp[i+1][j]+dp[i][j])%mod;
            }
        }
    }
    cout<<dp[n][m];
	return 0; 
} 
