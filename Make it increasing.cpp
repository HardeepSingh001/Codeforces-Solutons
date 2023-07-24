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
		bool f=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<i)
			f=1;
		}
		if(f)
		{
			cout<<-1<<endl;
			continue;
		}
		int c=0;
		for(int i=n-2;i>=0;i--)
		{
			while(a[i]>=a[i+1])
			{
				a[i]=a[i]/2;
				c++;
			}
			if(a[i]<i)
			{
				f=1;
				break;
			}
		}
		if(f)
		cout<<-1<<endl;
		else
		cout<<c<<endl;
	
	}
	return 0;
}	