#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
	
int main() {
	ios;
	
		string a,b,c;
		cin>>a>>b>>c;
		
		a=a+b;
		sort(a.begin(),a.end());
		sort(c.begin(),c.end());
		if(a.compare(c)==0)
		cout<<"YES";
		else
		cout<<"NO";
	
		
	
	
	return 0;
}	