#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;
	int cal(int r,int c)
	{
		if(r==1)
		return 1;
		if(c==1)
		return 1;
		return cal(r-1,c)+cal(r,c-1);
	}
int main() {
	ios;
	int n;
	cin>>n;
	cout<<cal(n,n)<<endl;
	
		
	
	return 0;
}	