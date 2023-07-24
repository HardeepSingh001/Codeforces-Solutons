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
		int s=0;
		bool f=0;
		for(int i=0;i<n;i++)
		{
			int q;
			cin>>q;
			s+=q;
			if(q==1)
			f=1;
		}
		if(s%2==0&&n%2==0)
		{
		
			cout<<"YES"<<endl;
		}
		else
		{
			if(f&&s%2==0)
			cout<<"YES"<<endl;
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}	