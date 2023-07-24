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
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				a[j]=a[j]-a[i];
			}
			m=max(a[i],m);
		}

		cout<<m<<endl;
	}
	return 0;
}	