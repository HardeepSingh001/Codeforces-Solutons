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
		ll a,b,c;
		cin>>a>>b>>c;
		if(a>=c)
		{
			cout<<-1<<" "<<b<<endl;
		}
		else if(a<=(c/b))
		{
			cout<<1<<" "<<-1<<endl;
		}
		else if(a>(c/b))
		{
			cout<<1<<" "<<b<<endl;
		}
	}
	return 0;
}	