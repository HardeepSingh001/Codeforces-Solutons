#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{

		int n,m;
		cin>>n>>m;
		int a[n][m];
		int s=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
			cin>>a[i][j];			
			}
		}
		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				for(int k=i;k<=n;k++)
				{
					for(int l=1;l<=m;l++)
					{
						if(a[i][j]==a[k][l])
						{
							if(i==k)
							{
								if(l>j)
								{
								int x;
								x=abs(k-i)+abs(l-j);
								
								s=s+x;
								}
							}
							else
							{
								int x;
								x=abs(k-i)+abs(l-j);
								s=s+x;
							
							}	
						}
					}
				}
			}
		}
		
	cout<<s<<endl;	

	return 0;
}