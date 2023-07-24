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
		ll a[n],b[n];
		ll mc=INT_MAX,mo=INT_MAX;
		ll s=0;
		for(int i=0;i<n;i++)
		{
		cin>>a[i];
		mc=min(mc,a[i]);
	    }
		
		for(int i=0;i<n;i++)
		{
		cin>>b[i];
		mo=min(mo,b[i]);
		}
		for(int i=0;i<n;i++)
		{
			
			s=s+max((a[i]-mc),(b[i]-mo));
			
		}
		cout<<s<<endl;
	}
	return 0;
}	