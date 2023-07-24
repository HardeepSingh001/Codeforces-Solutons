#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;
	
int main() {
	ios;
	string s;
	cin>>s;
	int k;
	cin>>k;
	int a[26];
	int mx=0;
	for(int i=0;i<26;i++)
	{
		cin>>a[i];
		mx=max(mx,a[i]);
	}

	int sum=0;
	for(int i=0;i<int(s.length());i++)
	{
		sum=sum+(a[s[i]-'a']*(i+1));
		//cout<<s[i]-'a'<<" ";
	
	}
	for(int i=s.length()+1;i<=int(k+s.length());i++)
	{
		sum=sum+(i*mx);
	}
	cout<<sum;
	return 0;
}	