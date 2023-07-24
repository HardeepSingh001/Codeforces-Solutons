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
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
			
		if(is_sorted(a,a+n))
		{
			cout<<0<<endl;
		}
		else if(a[0]==1||a[n-1]==n)
		{
			cout<<1<<endl;
		}
		else if(a[0]==n&&a[n-1]==1)
		{
			cout<<3<<endl;
		}
		else
		cout<<2<<endl;
	

	}
	return 0;
}	