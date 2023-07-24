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
		int x,y;
		cin>>x>>y;
		if(x==0&&y==0)
		{
			cout<<0<<endl;
			continue;
		}
		int s=sqrt((x*x)+(y*y));
		if(s*s==((x*x)+(y*y)))
		cout<<1<<endl;
		else
		cout<<2<<endl;
		
		
	}
	
	
	return 0;
}	