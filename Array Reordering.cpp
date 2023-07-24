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
		vector<int> v,o;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x%2)
			{
				o.pb(x);
			}
			else{
				v.pb(x);
			}
		}

		for(auto z:o)
		{
			v.pb(z);
		}
		int s=0;
		int f=v.size();
	
		for(int i=0;i<f;i++)
		{
			for(int j=i+1;j<f;j++)
			{
				if(__gcd(v[i],(2*v[j]))>1)
				s++;
			}
		}
		cout<<s<<endl;
		
		
		
	}
	return 0;
}	