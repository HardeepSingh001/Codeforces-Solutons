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
		int n=s.length();
		int a=0,b=0;
		bool f=1;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='A')
			a++;
			else if(s[i]=='B')
			{
				b++;
				if(a<b)
				{
					f=0;
					break;
				}
			}
		}
		if(f&&n>1&&s[n-1]=='B')
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}	