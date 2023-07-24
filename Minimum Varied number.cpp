#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
	
int main() {
	ios;
	int t;
	cin>>t;
	while(t--)
	{
		
		int n;
		cin>>n;
		stack<int> v;
		int p=9,i=0;
		while(n>0)
		{
		if(n<p)
		{
			v.push(n);
			break;
		}
		else{
			v.push(p);
			n=n-p;
			p--;
			i++;
		}
		}
		while(!v.empty())
		{
		cout<<v.top();
		v.pop();
		}
	 cout<<endl;
		
	}
	
	
	return 0;
}	