#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;
	
int main() {
	ios;
	int q;
	cin>>q;
	while(q--)
	{
		string s,t;
		cin>>s>>t;
		int n=s.length();
		bool f=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(s[i]==t[j])
				{
					f=1;
					break;
				}
			}
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