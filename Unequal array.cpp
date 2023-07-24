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
		int mn=INT_MAX,mx=INT_MIN;
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		
		for(int i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1])
			{
				mn=min(mn,i+1);
				mx=max(mx,i+2);
			}
		}
		
		if(mn==INT_MAX)
		cout<<0<<endl;
		else if(mx-mn==2)
		cout<<1<<endl;
		else if(mx-mn==1)
		cout<<0<<endl;
		else
		cout<<(mx-mn-2)<<endl;
		
	
	}
	return 0;
}	