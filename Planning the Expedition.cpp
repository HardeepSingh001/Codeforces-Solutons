#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;
	
int main() {
	ios;
	int n,m;
	cin>>n>>m;
	int a[m];
	int b[101];
	for(int i=0;i<101;i++)
		b[i]=0;
	
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
		b[a[i]-1]++;
	}
	
	
	if(m<n)
	{
	cout<<0<<endl;
	return 0;
	}
	int r=m/n;
	//cout<<r<<endl;
	while(r>0)
	{
	int c=0;
	for(int i=0;i<101;i++)
	{
		if(b[i]>=r)
		{
			int p=b[i]/r;
			c=c+p;
		}
		
	}
	//cout<<c<<" "<<r<<endl;
		if(c>=n)
		{
		cout<<r<<endl;
		break;
		}
		r--;
	}
	return 0;
}	