//pprockys
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)cin>>a[i];
	ll x,y,temp;
	x=0;
	y=abs(a[0]-a[1]);
	for(ll i=2;i<n;i++)
	{
	    temp=min(y+abs(a[i]-a[i-1]),x+abs(a[i]-a[i-2]));
		x=y;
		y=temp;
		
	}
	cout<<y;
}
