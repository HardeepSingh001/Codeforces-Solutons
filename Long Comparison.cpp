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
		ll x1,p1,x2,p2;
		cin>>x1>>p1>>x2>>p2;
		float a,b;
		
			
			a=ceil(pow(10,p1));
			
			b=ceil(pow(10,p2));
			
		//	cout<<a<<" "<<b<<endl;
			
			if((x1*a)>(x2*b))
			cout<<">"<<endl;
			else if((x1*a)<(x2*b))
			cout<<"<"<<endl;
			else
			cout<<"="<<endl;
			
			
		
	}
	return 0;
}	