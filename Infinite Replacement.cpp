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
		string s,r;
		cin>>s>>r;
		bool f=0;
		ll rl=r.length();
		for(ll i=0;i<rl;i++)
		{
			if(r[i]=='a')
			{
				f=1;
				break;
			}
		}
		if(f&&rl>1)
		{
			cout<<-1<<endl;
			continue;
		}
		else if(f&&rl==1)
		{
			cout<<1<<endl;
			continue;
		}
		else{
			cout<<(ll)pow(2,(s.length()))<<endl;
		}
		
		
	
	}
	return 0;
}	