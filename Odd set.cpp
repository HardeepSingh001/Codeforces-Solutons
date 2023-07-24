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
		int o=0,e=0;
		for(int i=0;i<2*n;i++)
		{
			int a;
			cin>>a;
			if(a%2)
			o++;
			else
			e++;
			
		}
		
		if(o==e)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	
	}
	
	
	return 0;
}	