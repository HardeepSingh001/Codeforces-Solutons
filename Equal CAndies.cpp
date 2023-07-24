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
		int a[n];
		int c=0;
		int mn=INT_MAX;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			mn=min(mn,a[i]);			
		}
		for(int i=0;i<n;i++)
		{
			c=c+(a[i]-mn);
		}
		cout<<c<<endl;
	}
		
	
	return 0;
}	