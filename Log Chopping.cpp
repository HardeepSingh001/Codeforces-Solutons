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
		for(int i=0;i<n;i++)
		{
			int z;
			cin>>z;
			s+=z-1;		
		}

		if(s%2)
		{
			cout<<"errorgorn"<<endl;
		}
		else
		cout<<"maomao90"<<endl;
	}
	return 0;
}	