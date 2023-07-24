#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;
	
int main() {
	ios;
	int n;
	cin>>n;
	int sx=0,sy=0,sz=0;
	int x[n],y[n],z[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i]>>z[i];
		sx+=x[i];
		sy+=y[i];
		sz+=z[i];
	}
	if(sx==0&&sy==0&&sz==0)
	{
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO";
	
	return 0;
}	