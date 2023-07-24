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
		int c=0,d=0;
		for(int i=0;i<6;i++)
		{
			if(i<3)
			c+=s[i];
			else
			d+=s[i];
			
		}
		if(c==d)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
		
	
	return 0;
}	