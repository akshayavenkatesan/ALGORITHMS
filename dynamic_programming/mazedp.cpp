#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	int dp[n][n];
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{
			if(i==0 || j==0)
			{
				dp[i][j]=1;
			}
			else
				dp[i][j]=dp[i-1][j]+dp[i][j-1];

		}
	}
/*	for(i=0;i<n;i++)
	{
		cout<<"\n";
		
		for(j=0;j<n;j++)
		{
			cout<<dp[i][j]<<"\t";
		}
	}*/
	cout<<"\n"<<dp[n-1][n-1];

	return 0;
}