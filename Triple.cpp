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
		int a[n];
		bool f=0;
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		sort(a,a+n);
		for(int i=2;i<n;i++)
		{
			if(a[i]==a[i-1]&&a[i-1]==a[i-2])
			{
				cout<<a[i]<<endl;
				f=1;
				break;
			}
		}
		if(f==0)
		cout<<-1<<endl;
	}
	return 0;
}	