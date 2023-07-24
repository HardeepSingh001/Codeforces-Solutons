#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
	
int main() {
	ios;
	int t;
	cin>>t;
	while(t--)
	{
		ll n,b,x,y;
		cin>>n>>b>>x>>y;
		ll a[n+1];
		a[0]=0;
		ll c=0;
		for(ll i=1;i<=n;i++)
		{
			a[i]=a[i-1]+x;
			if(a[i]>b)
			{
			a[i]=a[i-1]-y;
			}
			c=c+a[i];
				
		}
		
		cout<<c<<endl;
	}
	
	
	return 0;
}	