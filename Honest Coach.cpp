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
		int s[n];
		int a;
		int m=INT_MAX;
		for(int i=0;i<n;i++)
		cin>>s[i];
		
		sort(s,s+n);
		for(int i=1;i<n;i++)
		{
			a=s[i]-s[i-1];
			m=min(m,a);
		}
		cout<<m<<endl;
	}
	return 0;
}	