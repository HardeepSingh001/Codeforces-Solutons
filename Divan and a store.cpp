#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;

int main() {
	ios;
	int t;
	cin>>t;
	while(t--)
	{
		ll n,l,r,k;
		cin>>n>>l>>r>>k;
		ll a[n];
		ll c=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(ll i=0;i<n;i++)
		{
			if(a[i]>=l&&a[i]<=r)
			{
				k-=a[i];
				if(k>=0)
				c++;
				
			}
		}
		cout<<c<<endl;
	}
	return 0;
}	