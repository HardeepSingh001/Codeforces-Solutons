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
		int c,m,x;
		cin>>c>>m>>x;
		cout<<min(min(c,m),((c+m+x)/3))<<endl;
		
		
	}
	return 0;
}	