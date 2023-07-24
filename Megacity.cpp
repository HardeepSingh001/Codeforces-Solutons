#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;


int main() {
	ios;
	int n,s;
	cin>>n>>s;
	long double a;
	vector<pair<long double,int>> v;
	for(int i=0;i<n;i++)
	{
		int x,y,k;
		cin>>x>>y>>k;
		a=sqrt((x*x)+(y*y));
		v.pb(make_pair(a,k));
	}
	sort(v.begin(),v.end());
	for(auto x:v)
	{
		s=s+x.second;
		if(s>=1000000)
		{
			cout<<fixed<<setprecision(7)<<x.first<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	

	
	return 0;
}	