#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;
	
int main() {
	ios;
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int c=0;
	for(int i=1;i<=d;i++)
	{
		if(i%k==0||i%l==0||i%m==0||i%n==0)
		{
			c++;
		}
		
	}
	
	cout<<c;
	
	return 0;
}	