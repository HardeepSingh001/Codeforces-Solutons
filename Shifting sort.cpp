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
		int s=n-1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			for(int j=0;j<i;j++)
			{
				if(a[i]<a[j])
				break;
				if(j==i-1)
				s--;
			}
			}
		cout<<s<<endl;	
	
		for(int i=1;i<n;i++)
		{
			int curr=a[i];
			int j=i-1;
			int c=0;
			while(curr<a[j]&&j>=0)
			{
				a[j+1]=a[j];
				j--;
				c++;
			}
			a[j+1]=curr;
			
			
			if(c==0)
			continue;
			cout<<j+2<<" "<<i+1<<" "<<c<<endl;
			
			
		}
	
	}


	
	return 0;
}	