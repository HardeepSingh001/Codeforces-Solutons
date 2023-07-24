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
		int c=0;
		bool f=0;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==0)
			{
			c++;
			f=1;
			}
		}
		sort(a,a+n);
		for(int i=1;i<n;i++)
		{
			if(a[i]==a[i-1])
			f=1;
		}
		if(f)
		{
			cout<<n-c<<endl;
		}
		else{
			cout<<n+1<<endl;
		}
	}
		
	
	return 0;
}	