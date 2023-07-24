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
		string a;
		cin>>a;
		int m,l;
		bool f=1;
		
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]=='1')
			{
				m=i+1;
				f=0;
				break;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]=='1')
			{
				l=i+1;
				f=0;
				break;
			}
		}
		if(f)
		{
			cout<<n<<endl;
		}
		else if(l>=(n+1-m))
		cout<<m+max((n-m+1),m)<<endl;
		else
		cout<<(n-l+1)+max((n-l+1),l)<<endl;
		
	}
	return 0;
}	