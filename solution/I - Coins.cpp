#include <bits/stdc++.h>
using namespace std;

typedef double ll;

int main() {
	int n,i,j;
	cin>>n;
	ll a[n+2];
	for(i=1;i<=n;i++)
	cin>>a[i];
	vector<vector<ll>>dp(n+1,vector<ll>(n+2,0.000000));
	dp[0][0]=1.000000;
	for(i=1;i<=n;i++)
	dp[0][i]=dp[0][i-1]*(1.000000-a[i]);
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n;j++)
	    {
	        if(j<i)
	        dp[i][j]=0.000000;
	        else{
	        dp[i][j]=dp[i][j-1]*(1.000000-a[j]);
	        dp[i][j]+=dp[i-1][j-1]*a[j];
	    }}
	}
	ll ans=0.000000;
	for(i=(n+1)/2;i<=n;i++)
	ans+=dp[i][n];
	cout<<setprecision(10)<<ans;
	return 0;
}