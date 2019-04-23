#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,k;
	cin>>n;
	cin>>k;
	int dp[n+1][k+1]={};
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=k;j++)
		{
			if(i==j || j==0)
			{
				dp[i][j]=1;
			}
			else  if(j>i)
			{
				dp[i][j]=0;
			}
			else
			{
				dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
			}
		}
	}
	cout<<dp[n][k];
	/*for(i=0;i<=n;i++)
	{
		cout<<endl;
		for(j=0;j<=k;j++)
		{
			cout<<dp[i][j]<<"\t";
		}
	}*/
	return 0;
}
