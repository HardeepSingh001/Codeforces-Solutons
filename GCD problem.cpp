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
		ll n;
		cin>>n;
		for(ll i=2;i<n/2;i++)
		{
			ll a=i;
			ll b=n-a-1;
			ll c=__gcd(a,b);
			if(c==1)
			{
				cout<<a<<" "<<b<<" "<<c<<endl;
				break;
			}
		
		
		}
	}
	
	
	
	return 0;
}	