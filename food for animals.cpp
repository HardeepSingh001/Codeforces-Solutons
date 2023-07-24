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
		int a,b,c,x,y;
		cin>>a>>b>>c>>x>>y;
		if(((a+b+c)>=(x+y))&&((a+c)>=x)&&((b+c)>=y))
		{
				cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	
	}
	return 0;
}	