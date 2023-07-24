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
		int k;
		cin>>k;
		int g;
		g=__gcd(k,(100-k));
	
		cout<<(k/g)+(100-k)/g<<endl;
		
		
	

	}
	return 0;
}	