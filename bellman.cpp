#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
int d[100];
void bellman(int n, int e, int s)
{
	for(int i=0;i<n-1;i++)
	{
		for(vector<int> v2: g)
		{
			int u = v2[0];
			int v = v2[1];
			int w = v2[2];
			if(d[v] > d[u]+w)
				d[v]=d[u]+w;
		}
	}

	for(vector<int> v2: g)
	{
		int u = v2[0];
		int v = v2[1];
		int w = v2[2];
		if(d[v] > d[u]+w)
		{
			cout<<"Has negative cycles";
			return;
		}
	}
}
int main()
{

	int n,e,u1,v1,s,w1;
	cin>>n>>e;
	for(int i=0;i<e;i++)
	{
		vector<int> v;
		cin>>u1>>v1>>w1;
		v.push_back(u1);
		v.push_back(v1);
		v.push_back(w1);
		g.push_back(v);	
	}
	cin>>s;
	for(int i=0;i<n ;i++)
	{
		d[i]=99999;
	}
	d[s]=0;
	bellman(n,e,s);
	for(int i=0;i<n ;i++)
	{
		cout<<d[i]<<endl;
	}

	return 0;
}