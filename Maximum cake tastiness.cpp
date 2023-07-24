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
		ll a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		sort(a,a+n);
		
		cout<<(a[n-1]+a[n-2])<<endl;
	
		
	}
	
	
	
	return 0;
}	