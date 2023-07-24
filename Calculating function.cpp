#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
	
int main() {
	ios;
	
	ll n;
	cin>>n;
	if(n%2)
	cout<<-(n+1)/2;
	else
	cout<<n/2;
	return 0;
}	