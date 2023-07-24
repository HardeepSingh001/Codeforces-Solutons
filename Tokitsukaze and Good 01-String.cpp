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
		int n;
		cin>>n;
		string s;
		cin>>s;
		int c=0;
		for(int i=0;i<n;i+=2)
		{
			if(s[i]!=s[i+1])
			c++;
			
		}
		cout<<c<<endl;
	}
		
	
	return 0;
}	