void dfsUtil(int visited[],int pos)
{
	visited[pos]=1;
	cout<<pos<<endl;
	for(auto it=adj[pos].begin();it!=adj[pos].end();it++)
	{
		if(visited[*it]==0)
			dfsUtil(visited,*it);
	}
}
void dfs()
{
	int visited[size]={0};
	for(int i=0;i<size;i++)
	{
		if(visited[i]==0)
			dfsUtil(visited,i);
	}
}
