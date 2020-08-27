#include <bits/stdc++.h>
using namespace std;

typedef double ll;

int main() {
	int n,i,j,k;
	cin>>n>>k;
	int a[n+2];
	for(i=1;i<=n;i++)
	cin>>a[i];
	vector<int>dp(k+2,0);
	for(i=1;i<=k;i++)
	{
	    for(j=1;j<=n;j++)
	    {
	        if(i>=a[j])
	        {
	            dp[i]=max(dp[i],1-dp[i-a[j]]);
	        }
	    }
	}
	if(dp[k])
	cout<<"First";
	else
	cout<<"Second";
	return 0;
}
