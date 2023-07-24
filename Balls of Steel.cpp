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
		int n,k;
		cin>>n>>k;
		vector<pair<int,int>> v;
		bool f=0;
		for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			v.pb(make_pair(x,y));
		}
		for(int i=0;i<n;i++)
		{
			int mx=0;
			for(int j=0;j<n;j++){
				mx=max(mx,(abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second)));
			}
			if(mx<=k)
			f=1;
		}
		if(f)
		{
			cout<<1<<endl;
			
		}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}	