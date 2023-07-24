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
		int c=0;
		int n=s.length();
		if(s.length()==1)
		{
			cout<<"Bob "<<(s[0]-'a'+1)<<endl;
			continue;
		}
		if((s.length())%2==0)
		{
			for(int i=0;i<int(s.length());i++)
			{
				c=c+(s[i]-'a'+1);
			}
			cout<<"Alice"<<" "<<c<<endl;
		}
		else{
			if(s[0]>=s[n-1])
			{
				
			for(int i=0;i<int(s.length()-1);i++)
			{
				c=c+(s[i]-'a'+1);
			}
			cout<<"Alice"<<" "<<c-(s[n-1]-'a'+1)<<endl;
			}
			else{
				
			for(int i=1;i<int(s.length());i++)
			{
				c=c+(s[i]-'a'+1);
			}
			cout<<"Alice"<<" "<<c-(s[0]-'a'+1)<<endl;
			}
		}
	}
	return 0;
}	