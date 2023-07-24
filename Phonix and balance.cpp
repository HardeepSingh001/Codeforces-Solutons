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
		int n;
		cin>>n;
		int s=0,s1=0;
		for(int i=1;i<n/2;i++)
		{
			s=s+pow(2,i);
		}
		for(int i=n/2;i<n;i++)
		{
			s1=s1+pow(2,i);
		}
		cout<<((pow(2,n))+s)-s1<<endl;
	}
	return 0;
}	