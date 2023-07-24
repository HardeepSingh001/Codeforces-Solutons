#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int s=1;
		for(int i=0;i<n;i++)
		{
		cin>>a[i];
		}
	
		sort(a,a+n);
		
		for(int i=n-1;i>=0;i--)
		{
		
			if(s==a[i])
			{
				cout<<s<<endl;
				break;
			}
			else if(s>a[i])
			{
				cout<<s-1<<endl;
				break;
			}
			else
			s++;
		}
	}
	return 0;
}