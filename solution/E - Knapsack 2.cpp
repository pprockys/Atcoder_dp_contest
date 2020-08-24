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
	vector<vector<ll>>dp(100005,vector<ll>(n+2,-1));
	for(i=0;i<=n;i++)
	dp[0][i]=0;
	ll ans=-1;
	for(i=1;i<=100003;i++)
	{
	    for(j=1;j<=n;j++)
	    {
	        if(b[j]<=i)
	        {
	            if(dp[i-b[j]][j-1]!=-1)
	            {
	                if(dp[i-b[j]][j-1]+a[j]<=w)
	                {
	                    if(dp[i][j]==-1)
	                    dp[i][j]=dp[i-b[j]][j-1]+a[j];
	                    else
	                    dp[i][j]=min(dp[i][j],dp[i-b[j]][j-1]+a[j]);
	                    ans=max(ans,i);
	                }
	            }
	            if(dp[i][j-1]!=-1&&dp[i][j]==-1)
	            dp[i][j]=dp[i][j-1];
	        }
	        else dp[i][j]=dp[i][j-1];
	        if(dp[i][j]!=-1&&dp[i][j-1]!=-1)
	        dp[i][j]=min(dp[i][j],dp[i][j-1]);
	    }
	}
	cout<<ans;
	return 0;
}
