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
		int x;
		cin>>x;
		if(x>=1900)
		{
			cout<<"Division 1"<<endl;
		}
		else if(x>=1600&&x<=1899)
		cout<<"Division 2"<<endl;
		else if(x>=1400&&x<=1599)
		cout<<"Division 3"<<endl;
		else
		cout<<"Division 4"<<endl;
	}
	return 0;
}	