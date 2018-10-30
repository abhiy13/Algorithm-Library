#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<ll> *adj;

void addEdge(ll u, ll v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void dfsUtil(ll visited[], ll pos)
{
	visited[pos] = 1;
	cout<<pos<<endl;
	for(auto it = adj[pos].begin(); it != adj[pos].end(); it++)
	{
		if(visited[*it] == 0)
			dfsUtil(visited, *it);
	}
}
void dfs(ll n)
{
	ll visited[n] = {0};
	for(ll i = 0; i < n; i++)
	{
		if(visited[i] == 0)
			dfsUtil(visited, i);
	}
}

int main()
{
	ll n, m;
	cin>>n>>m;
	adj = new vector<ll>[n];

	while(m--)
	{
		ll u,v;
		cin>>u>>v;
		addEdge(u-1, v-1);
	}
	dfs(n);
	return 0;
}
