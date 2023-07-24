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
		float n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		bool f=1;
		if(k==0)
		{
			cout<<"YES"<<endl;
			continue;
		}
		if(k==n/2)
		{
			cout<<"NO"<<endl;
			continue;
		}
		
		for(int i=0;i<k;i++)
		{
			if(s[i]!=s[n-1-i])
			f=0;
		}
		if(f)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}
	return 0;
}	