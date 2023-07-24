#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;
	
int main() {
	ios;
	int n;
	cin>>n;
	int a[n],b[5000];
	int c=0;
	for(int i=0;i<5000;i++)
	b[i]=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]-1]++;
	//	cout<<b[a[i]-1]<<" ";
		
	}
	
	for(int i=0;i<5000;i++)
	{
		//cout<<b[i]<<" ";
		if(b[i]!=0)
		{
			if(i>n-1)
			c=c+b[i];
			else
			c+=(b[i]-1);
		}
	
	}
	
	cout<<c<<endl;
	
	return 0;
}	