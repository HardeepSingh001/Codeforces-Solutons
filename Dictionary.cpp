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
		
		for(int i=1;i<=26;i++)
		{
			for(int j=1;j<=26;j++)
			{
				if(i==j)
				continue;
				c++;
				if(i==(s[0]-'a'+1)&&j==(s[1]-'a'+1))
				{
					cout<<c<<endl;
					break;
				}
			
			}
			}
	
	}
	return 0;
}	