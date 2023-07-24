#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
using namespace std;
	
int main() {
	ios;
	ll n,k;
	cin>>n>>k;
	ll a[n],b[n],c[k];
	ll ct=0;
	vector<ll> v;
	
	for(ll i=0;i<k;i++)
	{
		c[i]=0;
	}
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		
		c[a[i]-1]++;
	}
	
	for(ll i=0;i<k;i++)
	{
		if(c[i]==0)
		ct++;
	}
	for(ll i=0;i<n;i++)
	{
		cin>>b[i];
	}
	/*
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<endl;
	}
	cout<<ct<<endl;
	*/
	
	for(ll i=0;i<k;i++)
	{
		if(c[i]>1)
		{
			vector<ll> l;
			for(ll j=0;j<n;j++)
			{
				if(a[j]==i+1)
				{
					l.pb(b[j]);
				}
			}
		
		sort(l.begin(),l.end());
		l.pop_back();
		
		
		for(auto z: l)
		{
			v.pb(z);
			
		}
	
		}
	}
	
	ll s=0;
	sort(v.begin(),v.end());
	for(ll i=0;i<ct;i++)
	{
		
		s=s+v[i];
		}

	cout<<s<<endl;
	
	return 0;
}	