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
		int n,m;
		cin>>n>>m;
		string s[n];
		int c=0;
		int mn=INT_MAX;
	
		for(int i=0;i<n;i++)
		{
			cin>>s[i];			
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				c=0;
				for(int k=0;k<m;k++)
				{
					c=c+abs(s[i][k]-s[j][k]);
				}
				mn=min(mn,c);
			}
		}
		cout<<mn<<endl;
	}
		
	
	return 0;
}	