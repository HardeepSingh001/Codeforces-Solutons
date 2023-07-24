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
		int a[n+n];
		vector<int> v;
		set<int> s;
		int c=1;
		for(int i=0;i<2*n;i++)
		{
		cin>>a[i];	
		s.insert(a[i]);
		if(s.size()==c)
		{
		v.pb(a[i]);
		c++;
		}
	    }
	    
		for (auto x:v)
		{
        cout<<x<<" ";
        }
        cout<<endl;
        
       
	}
	return 0;
}	