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
		int n;
		cin>>n;
		int ans=16;
		for(int i=0;i<=15;i++)
		{
			for(int j=0;j<=15;j++)
			{
				int num=pow(2,i)*(n+j);
           		 if(num%32768 == 0)
                	 ans=min(ans,i+j);
			}
		}
		cout<<ans<<" ";

	}
	return 0;
}	