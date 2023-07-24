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
		int n,k;
		cin>>n>>k;
		int a[n],b[n];
		int s=0;
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		
		for(int i=0;i<n;i++)
		cin>>b[i];
		
		sort(a,a+n);
		sort(b,b+n);
		reverse(b,b+n);
		
		int i=0;
		while(k>0)
		{
			if(b[i]>a[i])
			{
				swap(b[i],a[i]);
				i++;
				k--;
			}
			else{
				break;
			}
		}
		
		for(int i=0;i<n;i++)
		s=s+a[i];
		
		cout<<s<<endl;
		
	
	}
	return 0;
}	