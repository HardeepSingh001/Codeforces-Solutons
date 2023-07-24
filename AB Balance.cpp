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
		int ab=0,ba=0;
		int n=s.length();
		for(int i=1;i<n;i++)
		{
			if(s[i]=='a'&&s[i-1]=='b')
			ba++;
			if(s[i]=='b'&&s[i-1]=='a')
			ab++;
		}
		if(ab==ba)
		{
			cout<<s<<endl;
		}
		else
		{
			if(s[n-1]=='a')
			{
				s[n-1]='b';
				cout<<s<<endl;
			}
			else
			{
				s[n-1]='a';
				cout<<s<<endl;
			}
		}
	}
	return 0;
}	