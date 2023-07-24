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
		int a[n];
		int m=1,c=1;
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		sort(a,a+n);
		
		for(int i=1;i<n;i++)
		{
			if(a[i]==a[i-1])
			{
				c++;
				m=max(c,m);
			}
			else
			c=1;
		}
		//cout<<m<<endl;
		
		int ans = 0;
        while (m < n)
        {
            int d = min(n - m, m);
            ans += 1 + d;
            m += d;
        }
        cout << ans << '\n';
	
	

	}
	return 0;
}	