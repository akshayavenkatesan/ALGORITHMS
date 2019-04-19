#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	int dp[n+1];
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	for(i=4;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	}
	cout<<dp[n];

	return 0;
}
//Count ways to reach the nth stair using step 1, 2 or 3