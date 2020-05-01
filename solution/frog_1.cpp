//pprockys
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)cin>>a[i];
	ll dp[n];
	dp[0]=0;
	dp[1]=abs(a[0]-a[1]);
	for(ll i=2;i<n;i++)
	{
	    dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2]));
	}
	cout<<dp[n-1];
}
