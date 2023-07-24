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
		ll n;
		cin>>n;
		ll s=0;
		for(ll i=1;i<=n/2;i++)
		{
			s=s+(8*i*i);
		}
		cout<<s<<endl;
	}
	return 0;
}	