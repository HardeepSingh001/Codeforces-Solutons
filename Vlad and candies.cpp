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
	int m;
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	if(n==1&&a[0]==1)
	{
		cout<<"YES"<<endl;
		continue;
	}
	else if(n==1)
	{
		cout<<"NO"<<endl;
		continue;
	}
		
	sort(a,a+n);
	m=a[n-1]-a[n-2];
	
	if(m>1)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}

	}
	return 0;
}	