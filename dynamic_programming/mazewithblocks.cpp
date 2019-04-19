#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c[n][n],dp[n][n]={0},i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>c[i][j];

		}
	}
	if(c[0][0]==-1)
	{
		return 0;
	}
	else
	{
		dp[0][0]=1;
		for(j=1;j<n;j++)
		{
			if(c[0][j] != -1)
				dp[0][j]=1;
			else
				break;
		}
		for(j=1;j<n;j++)
		{
			if(c[j][0] != -1)
				dp[j][0]=1;
			else
				break;
		}
		for(i=1;i<n;i++)
		{
			for(j=1;j<n;j++)
			{
				if(c[i][j]==-1)
					continue;
	
				if(dp[i-1][j]>0)
				{
					dp[i][j]=dp[i-1][j]+dp[i][j];
				}
				if(dp[i][j-1]>0)
				{
					dp[i][j]=dp[i][j-1]+dp[i][j];
				}
			}
		}
/*		for(i=0;i<n;i++)
		{
			cout<<"\n";
		
			for(j=0;j<n;j++)
			{
				cout<<dp[i][j]<<"\t";
			}
		}
*/
		cout<<dp[n-1][n-1];
	}
	return 0;
}
//Count number of ways to reach destination in a Maze
/*Given a maze with obstacles, count number of paths to reach rightmost-bottommost cell from topmost-leftmost cell. A cell in given maze has value -1 if it is a blockage or dead end, else 0.

From a given cell, we are allowed to move to cells (i+1, j) and (i, j+1) only.*/

