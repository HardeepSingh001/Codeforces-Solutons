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
		ll n;
		cin>>n;
		ll a=n;
		ll b=a;
		bool f=1;
		
		while(f)
		{
			while(a>0)
			{
				ll d=a%10;
				a=a/10;
				if(d==0)
				continue;
				if((b%d)!=0)
				{
					n++;
					a=n;
					b=a;
					break;
				}
				if(a==0)
				{
					f=0;
					break;
				}
			}
			
		}
		cout<<b<<endl;	
	}
	return 0;
}	