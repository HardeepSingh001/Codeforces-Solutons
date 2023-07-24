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
		vector<int> o,e;
		bool f=0;
		for(int i=0;i<n;i++)
		{
		cin>>a[i];
		}
		
		if(a[0]%2==0&&a[1]%2==0)
		{
			for(int i=2;i<n;i++)
			{
				
				if(a[i]%2)
				{
					cout<<"NO"<<endl;
					f=1;
					break;
				}
				}
				if(f==0)
				{
					cout<<"YES"<<endl;
				}
				
		}
		else if(a[0]%2==0&&a[1]%2){
			for(int i=1;i<n;i++)
			{
				if(i%2&&a[i]%2==0)
				{
					cout<<"NO"<<endl;
					f=1;
					break;
				}
				
				if(i%2==0&&a[i]%2)
				{
					cout<<"NO"<<endl;
					f=1;
					break;
				}
				}
				if(f==0)
				{
					cout<<"YES"<<endl;
				}
				
		}
		else if(a[0]%2&&a[1]%2==0){
			for(int i=1;i<n;i++)
			{
				if(i%2&&a[i]%2)
				{
					cout<<"NO"<<endl;
					f=1;
					break;
				}
				
				if(i%2==0&&a[i]%2==0)
				{
					cout<<"NO"<<endl;
					f=1;
					break;
				}
				}
				if(f==0)
				{
					cout<<"YES"<<endl;
				}
				
		}
		else if(a[0]%2&&a[1]%2){
			for(int i=1;i<n;i++)
			{
				
				if(a[i]%2==0)
				{
					cout<<"NO"<<endl;
					f=1;
					break;
				}
				}
				if(f==0)
				{
					cout<<"YES"<<endl;
				}
				
		}
	}
	return 0;
}	