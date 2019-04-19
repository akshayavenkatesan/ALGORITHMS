#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,m,coin[100];
	cin>>n;//total
	cin>>m;//no of coins
	for(i=0;i<m;i++)
		cin>>coin[i];
	int dp[m+1][n+1]={0};
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(j==0)
				dp[i][j]=1;
			else if(i==0 && j != 0)
					dp[i][j]= 0;
			else if(j<coin[i-1])
				dp[i][j]=dp[i-1][j];
			else if(j>=coin[i-1])
				dp[i][j]=dp[i-1][j]+dp[i][j-coin[i-1]];

		}
	}
		
/*	for(i=0;i<=m;i++)
	{
		cout<<"\n";
		for(j=0;j<=n;j++)
		{
			cout<<dp[i][j]<<"\t";
		}
	}*/
	cout<<dp[m][n];
	return 0;



}