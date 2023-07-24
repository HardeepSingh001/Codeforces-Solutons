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
		int a[n];
		int s=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			s+=a[i];
		}
		 
		 if(s%n==0)
		 {
		 	cout<<0<<endl;
		 }
		 else
		 cout<<1<<endl;
	}
	return 0;
}	