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
		int a,b,c;
		cin>>a>>b>>c;
		if((a+(2*b)+(3*c))%2)
		cout<<1<<endl;
		else
		cout<<0<<endl;
	}


	
	return 0;
}	