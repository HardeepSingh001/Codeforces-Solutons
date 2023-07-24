#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;
	
int main() {
	ios;
	int a[4];
	set<int> s;
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	cout<<4-(s.size())<<endl;
	
	
	return 0;
}	