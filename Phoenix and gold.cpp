#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		int s=0,c=0;
		for(int i=0;i<n;i++)
		{
		cin>>a[i];
		c=c+a[i];
		}
		if(c==x)
		{
			cout<<"NO"<<endl;
			continue;
		}
		cout<<"YES"<<endl;
		
		for(int i=0;i<n;i++)
		{
			s=s+a[i];
			if(s==x)
			{
				cout<<a[i+1]<<" "<<a[i]<<" ";
				i++;
			}
			else
			cout<<a[i]<<" ";
			
		}
		cout<<endl;
		
	}
	return 0;
}