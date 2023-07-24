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
		int ah,bh,n;
		cin>>ah>>bh>>n;
		float a[n],b[n];
		//int s=0;
		bool f=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		
		for(int i=0;i<n;i++)
		{
			float p=ceil(b[i]/ah);
			if(i==n-1)
			{
				if(bh>0&&p<=1)
				f=1;
			}
			bh=bh-(p*a[i]);
			if(i!=n-1&&bh<=0)
			{
				f=0;
				break;
			}
			cout<<bh<<" ";

			
		}
		
		if(f)
		{
			cout<<"YES"<<endl;
			
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}	