#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
	
int main() {
	ios;
	int n;
	cin>>n;
	int s=0;
	for(int i=0;i<n;i++)
	{
		int b;
		cin>>b;
		s=s+b;
	}
	
	cout<<s;
	
	return 0;
}	