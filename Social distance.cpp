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
		ll n,m;
		cin>>n>>m;
		ll a[n];
		for(ll i=0;i<n;i++)
		cin>>a[i];
		ll s=0;
		
		sort(a,a+n);
		
		for(ll i=0;i<n-1;i++)
		{
			ll m=max(a[i],a[i+1]);
			s=s+m;
		}
		s=s+max(a[0],a[n-1]);
		if((s+n)<=m)
		{
			cout<<"YES"<<endl;
			
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}	