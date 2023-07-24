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
		int n,a,b;
		cin>>n>>a>>b;
		string s;
		cin>>s;
		if(b>=0)
		{
			cout<<(a+b)*n<<endl;
		}
		else
		{
			int m=unique(s.begin(),s.end())-s.begin();
 		   cout<<n*a+max(n*b,(m/2+1)*b)<< '\n'; 
		}
	}
	return 0;
}	