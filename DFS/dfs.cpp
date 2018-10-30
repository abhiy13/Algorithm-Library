void dfsUtil(int visited[],int pos, vector<vector<int>> adj)
{
	visited[pos] = 1;
	cout<<pos<<endl;
	for(auto it = adj[pos].begin(); it != adj[pos].end(); it++)
	{
		if(visited[*it] == 0)
			dfsUtil(visited, *it, adj);
	}
}
void dfs(vector<vector<int>> adj)
{
	int visited[adj.size()] = {0};
	for(int i = 0; i < size; i++)
	{
		if(visited[i] == 0)
			dfsUtil(visited, i, adj);
	}
}
