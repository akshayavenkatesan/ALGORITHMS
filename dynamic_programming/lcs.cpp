#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,m,n;
	string a,b;
	cin>>a;
	cin>>b;
	m=a.length();
	n=b.length();
	int lcs[m+1][n+1];
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0||j==0)
			{
				lcs[i][j]=0;
			}
			else if(a[i-1]==b[j-1])
			{
				lcs[i][j]=1+lcs[i-1][j-1];

			}
			else
				lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
		}
	}
	cout<<lcs[m][n];



	return 0;
}