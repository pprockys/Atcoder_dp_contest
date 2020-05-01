//pprockys
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n,k,i,j;
	cin>>n>>k;
	ll a[n];
	for(ll i=0;i<n;i++)cin>>a[i];
	ll dp[n];
	dp[0]=0;
	dp[1]=abs(a[0]-a[1]);
	for(i=2;i<n;i++)
	{
	    dp[i]=dp[i-1]+abs(a[i]-a[i-1]);
	    j=2;
	    while(j<=k&&i-j>=0)
	    {
	        dp[i]=min(dp[i],dp[i-j]+abs(a[i]-a[i-j]));
	        j++;
	    }
	}
	cout<<dp[n-1];
}
