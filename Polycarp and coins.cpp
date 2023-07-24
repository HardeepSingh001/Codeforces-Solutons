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
		if((n/3)+((n+2)*2/3)==n)
		cout<<(n/3)<<" "<<(n+2)/3<<endl;
		else
		cout<<((n+2)/3)<<" "<<n/3<<endl;
	
	}
	
	
	return 0;
}	