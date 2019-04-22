#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,i,j;
	string a="akshaya";
	string b="keshav";
	m=a.length();
	n=b.length();
	int dp[m+1][n+1];
	dp[0][0]=0;

	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0)
			{
				dp[i][j]=j;
			}
			else if(j==0)
			{
				dp[i][j]=i;
			}
			else if(a[i-1]== b[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
			else
			{
				dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
			}

		}
	}
	cout<<dp[m][n];
/*	for(i=0;i<=m;i++)
	{
	    cout<<endl;
		for(j=0;j<=n;j++)
		{
			cout<<dp[i][j]<<"\t";

		}
	}*/






	return 0;
}
