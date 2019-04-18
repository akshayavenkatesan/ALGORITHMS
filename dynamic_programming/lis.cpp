#include<bits/stdc++.h>
using namespace std;
int main()
{ 	int a[100],n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int lis[n];
	lis[0]=1
	for(i=1;i<n;i++)
	{
		lis[i]=1;
		for(j=0;j<i;j++)
		{
			if(a[j]<a[i] && lis[j]+1>lis[i])
			{
				lis[i]=lis[j]+1;
			}
		}
	}
	cout<< *max_element(lis,lis+n);



	return 0;
}