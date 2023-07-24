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
	
	int b=0,c=0;
	string a;
	cin>>a;
	
	for(int i=1;i<n;i++)
	{
		if(a[i]=='0'&&a[i-1]=='0')
		b=b+2;
	}
	
		
	for(int i=2;i<n;i++)
	{
		if(a[i]=='0'&&a[i-2]=='0'&&a[i-1]=='1')
		c++;
	}
	cout<<b+c<<endl;

	}
	return 0;
}	