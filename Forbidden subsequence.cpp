#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
	
int main() {
	ios;
	int t;
	cin>>t;
	while(t--)
	{
		string s,a;
		cin>>s;
		cin>>a;
		int l=s.length();
		int ca=0,cb=0,cc=0;
		for(int i=0;i<l;i++)
		{
			if(s[i]=='a')
			ca++;
			if(s[i]=='b')
			cb++;
			if(s[i]=='c')
			cc++;
		}
		
		sort(s.begin(),s.end());
		if(a=="abc")
		{
			if(ca==0||cb==0||cc==0)
			{
				cout<<s<<endl;
			}
			else
			{
			for(int i=0;i<ca;i++)
			{
				cout<<"a";
			}
			for(int i=0;i<cc;i++)
			{
				cout<<"c";
			}
			for(int i=0;i<cb;i++)
			{
				cout<<"b";
			}
			
			for(int i=0;i<l;i++)
			{
			if(s[i]=='a'||s[i]=='b'||s[i]=='c')
			{
				continue;
			}
			cout<<s[i];
			}
			cout<<endl;
			}
		}
		else
		{
			cout<<s<<endl;
		}
		
	}
	
	
	
	return 0;
}	