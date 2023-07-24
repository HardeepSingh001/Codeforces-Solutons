#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;


int main() {
	ios;
	int n,m;
	cin>>n>>m;
	int a[n][m];
	int s=0;
	
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>a[i][j];
	
	for(int i=n-1;i>=0;i--)
	{
		for(int j=m-1;j>=0;j--)
		{
			if(a[i][j]==0)
			{
				int m=min(a[i][j+1],a[i+1][j])-1;
				if((m<=a[i-1][j]&&i-1>=0)||(m<=a[i][j-1]&&j-1>=0))
	    		{
	    		cout<<-1<<endl;
	    		return 0;
	    		}
	    		a[i][j]=m;
				
			}
			
			if((a[i][j]<=a[i-1][j]&&i>0)||(a[i][j]<=a[i][j-1]&&j>0))
			{
				cout<<-1<<endl;
				return 0;
			}
			
			s=s+a[i][j];
		}
	}
	
	cout<<s;
	
	return 0;
}	