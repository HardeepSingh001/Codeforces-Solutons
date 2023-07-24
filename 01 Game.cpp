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
		int c0=0,c1=0;
		int l=s.length();
		for(int i=0;i<l;i++)
		{
			if(s[i]=='0')
			c0++;
			else
			c1++;
		}
		int m=min(c0,c1);
		if(m%2==0)
		{
			cout<<"NET"<<endl;
		}
		else
		cout<<"DA"<<endl;
	}
	return 0;
}	