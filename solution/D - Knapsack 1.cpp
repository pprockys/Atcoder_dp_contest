#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m=1000000007;
int main() {
	ll n,k,i,j,w;
	cin>>n>>w;
	ll a[n+1],b[n+1];
	for(i=1;i<=n;i++)
	{
	    cin>>a[i]>>b[i];
	}
	vector<vector<ll>>dp(n+1,vector<ll>(w+1,0));
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=w;j++)
	    {
	        dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
	        if(j>=a[i])
	        {
	            dp[i][j]=max(dp[i][j],b[i]+dp[i-1][j-a[i]]);
	        }
	    }
	}
	cout<<dp[n][w];
	return 0;
}