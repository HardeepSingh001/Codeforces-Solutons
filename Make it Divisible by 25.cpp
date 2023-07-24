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
		string s;
		cin>>s;
		int l=s.size();
		int ans=INT_MAX;
		for(int i=0;i<l-1;i++)
		{
		for(int j=i+1;j<l;j++)
		{
			int w=(s[i]-'0')*10+(s[j]-'0');
			if(w%25==0)
			{
				ans=min(ans,l-i-2);
			}
		}
		}
		cout<<ans<<endl;
	}
	return 0;
}	