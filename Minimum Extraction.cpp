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
		int n;
		cin>>n;
		ll a[n];
		ll m=INT_MIN;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		
		for(int i=1;i<n;i++)
		{
			m=max(a[i]-a[i-1],m);
		}

		cout<<max(a[0],m)<<endl;
	}
	return 0;
}	