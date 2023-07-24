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
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}

		sort(a,a+n);
		
		ll ans = 0, d = 1;
		for(int i = 0; i < n; ++i) {
			if(a[i] > x) break;
			ans += (x - a[i]) / d + 1;
			++d;
			x -= a[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}	