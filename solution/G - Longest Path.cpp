#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v[100005];
bool visi[100005];
ll sum[100005];
ll ans;

void dfs(ll u)
{
    visi[u]=true;
    for(auto i:v[u])
    {
        if(visi[i]==false)
        {
            dfs(i);
        }
        sum[u]=max(sum[i]+1,sum[u]);
    }
    ans=max(ans,sum[u]);
}

int main() {
	ll m,n,k,i,j,w;
    cin>>n>>m;
    while(m--)
    {
        cin>>i>>j;
        v[i].push_back(j);
    }
    for(i=1;i<=n;i++)sum[i]=1;
    ans=-1;
    for(i=1;i<=n;i++)
    if(!visi[i])
    dfs(i);
    cout<<ans-1;
	return 0;
}
