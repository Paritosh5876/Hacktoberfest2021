// Graph Cycle Implementation
#include<bits/stdc++.h>
using namespace std;

// using BFS
bool bfs(vector<vector<int > > graph, int n)
{
	vector<int > topological_order, indegree(n, 0);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<graph[i].size();j++)
		{
			indegree[graph[i][j]]++;
		}
	}
	
	queue<int > q;
	for(int i=0;i<n;i++)
	{
		if(indegree[i]==0)
		q.push(i);
	}
	
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		
		topological_order.push_back(x);
		for(int i=0;i<graph[x].size();i++)
		{
			indegree[graph[x][i]]--;
			if(indegree[graph[x][i]]==0)
			q.push(graph[x][i]);
		}
	}
	
	if((int)topological_order.size()!=n)
	return true;
	return false;
	
}


int main() 
{
	int n = 7;
	// directed graph ----------------------------------------------------------------------------------
	vector< vector< int > > graph(n);// with cycle
	graph[0].push_back(1);
	graph[0].push_back(2);
	graph[1].push_back(2);
	graph[2].push_back(4);
	graph[4].push_back(3);
	graph[3].push_back(1);
	graph[3].push_back(5);
	graph[4].push_back(6);
	
	vector< vector< int > > graph1(n);// without cycle
	graph1[0].push_back(1);
	graph1[0].push_back(2);
	graph1[1].push_back(2);
	graph1[2].push_back(4);
	graph1[4].push_back(3);
	graph1[1].push_back(3);
	graph1[3].push_back(5);
	graph1[4].push_back(6);
	
	// using BFS
	// we make use of indegree array, and also for topological order array, then if size of topo!=n then cycle else not
	if(bfs(graph, n))
	cout<<"Cycle is Present\n";
	else
	cout<<"Cycle is not Present\n";
	
	return 0;
}
