// STL based implementation of Breadth for Search.
//shan61916
#include <bits/stdc++.h>
using namespace std;

vector<bool> visited; 
vector<vector<int> > graph; 
  
void edge(int a, int b) 
{ 
    graph[a].push_back(b);  // adding an edge.
  
} 
  
void bfs(int u) 
{ 
    queue<int> q; 
  
    q.push(u); 
    visited[u] = true; 
  
    while (!q.empty()) { 
  
        int f = q.front(); 
        q.pop(); 
  
        cout << f << " "; 
  
        for (auto i = graph[f].begin(); i != graph[f].end(); i++) { 
            if (!visited[*i]) { 
                q.push(*i); 
                visited[*i] = true; 
            } 
        } 
    } 
} 
  
int main() 
{ 
    int n, e; // n-> no. of vertices && e->no. of edges
    cin >> n >> e; 
  
    visited.assign(n, false); 
    graph.assign(n, vector<int>()); 
  
    int a, b; 
    bool bidir = 1 ;
    
    for (int i = 0; i < e; i++) { 
        cin >> a >> b; 
        edge(a, b); 
        if(bidir)
        {
        edge(b,a) ;
        }
    } 
  
    for (int i = 0; i < n; i++) { 
        if (!visited[i]) 
            bfs(i); 
    } 
  
    return 0; 
} 
