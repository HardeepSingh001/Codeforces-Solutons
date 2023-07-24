#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;
	
int main() {
	ios;
	int n;
	cin>>n;
	string s;
	cin>>s;
	bool a[10];
	for(int i=0;i<10;i++)
	a[i]=0;
	
	for(int i=0;i<n;i++)
	{
		if(s[i]=='L')
		{
			for(int j=0;j<10;j++)
			{
				if(a[j]==0)
				{
				a[j]=1;
				break;
				}
			}
		}
		
		if(s[i]=='R')
		{
			for(int j=9;j>=0;j--)
			{
				if(a[j]==0)
				{
				a[j]=1;
				break;
				}
			}
		}
		
		if(s[i]=='0')
		a[0]=0;
		if(s[i]=='1')
		a[1]=0;
		if(s[i]=='2')
		a[2]=0;
		if(s[i]=='3')
		a[3]=0;
		if(s[i]=='4')
		a[4]=0;
		if(s[i]=='5')
		a[5]=0;
		if(s[i]=='6')
		a[6]=0;
		if(s[i]=='7')
		a[7]=0;
		if(s[i]=='8')
		a[8]=0;
		if(s[i]=='9')
		a[9]=0;
		
	}
	for(int i=0;i<10;i++)
	cout<<a[i];
	cout<<endl;
	
	
	return 0;
}	