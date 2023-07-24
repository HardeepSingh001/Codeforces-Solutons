#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


void solve(int n,int *a)
{
	if(n==0)
	{
		return ;
	}
	int s=sqrt(n);
	if(s*s==n)
	{
		for(int i=0;i<n;i++)
		{
			a[i]=n-i;
		}
		return ;
	}
	else{
		s=s+1;
		int k; 
		k=s*s;
		
		for(int i=k-n;i<=n;i++)
		{
			a[i]=k-i;
		}
		//return;
		solve(k-n-1,a);
		
	}
}

	
int main() {
	ios;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			a[i]=0;
		solve(n-1,a);
		
		for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		cout<<endl;
	
	}
	
	return 0;
}	