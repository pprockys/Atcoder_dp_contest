#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	ll n,i,j,k;
	cin>>n>>k;
	ll a[n+3];
	for(i=1;i<=n;i++)
	cin>>a[i];
	a[0]=0;
	sort(a,a+n+1);
	vector<vector<ll>>dp(k+2,vector<ll>(n+2,1));
	ll ans=1;
	ll mod=1000000007;
	for(i=1;i<=k;i++)
	{
	    for(j=1;j<=n;j++)
	    {
	        ll x=min(i,a[j]);
	        x++;
	        if(x>i)
	        ans=dp[i][j-1]%mod;
	        else
	        {
	            ans=dp[i][j-1]-dp[i-x][j-1]+mod;
	            ans%=mod;
	        }
	        dp[i][j]=dp[i-1][j]%mod+ans;
	        dp[i][j]%=mod;
	    }
	}
    cout<<ans;
	return 0;
}
