#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m=1000000007;
int main() {
	ll m,n,k,i,j,w;
	string a,b;
	cin>>a>>b;
	n=a.length();
	m=b.length();
	vector<vector<ll>>dp(n+1,vector<ll>(m+1,0));
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
	        if(a[i]==b[j])
	        dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+1);
	    }
	}
	k=dp[n][m];
	string ans="";
	if(k==0)
	{
	    cout<<' ';
	    return 0;
	}
	i=n,j=m;
	while(1)
	{
	    if(ans.length()==k)
	    break;
	    if(a[i-1]==b[j-1])
	    {
	        ans+=a[i-1];
	        i=i-1;
	        j=j-1;
	    }
	    else if(dp[i][j-1]==dp[i][j])
	    {
	        j=j-1;
	    }
	    else
	    {
	        i-=1;
	    }
	}
	for(i=k-1;i>=0;i--)
	cout<<ans[i];
	return 0;
}
