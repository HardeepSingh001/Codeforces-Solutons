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
		int n;
		cin>>n;
		int a[n],b[n];
		ll s=0;
		for(int i=0;i<n;i++)
		{
		cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
		cin>>b[i];
		}
		
		for(int i=1;i<n;i++)
		{
			ll m=min((abs(a[i]-a[i-1])+abs(b[i]-b[i-1])),(abs(b[i]-a[i-1])+abs(a[i]-b[i-1])));
			s=s+m;
		}

		cout<<s<<endl;
		

	}
	return 0;
}	