#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[5005];

ll fun(ll l,ll r,vector<vector<ll>>&dp)
{
    if(l>r)return 0;
    if(l==r)return dp[l][r]=a[l];
    if(dp[l][r]!=-1)return dp[l][r];
    return dp[l][r]=max(a[l]-fun(l+1,r,dp),a[r]-fun(l,r-1,dp));
}

int main() {
	ll n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	vector<vector<ll>>dp(n+1,vector<ll>(n+1,-1));
    cout<<fun(1,n,dp);
	return 0;
}
