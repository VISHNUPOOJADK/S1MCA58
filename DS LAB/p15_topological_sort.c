#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int adj[MAX][MAX];
int visited[MAX];
int stack[MAX];
int top=-1;
void addEdge(int u,int v)
{
   adj[u][v]=1;
}
void dfs(int v,int n)
{
	visited[v]=1;
	for(int i=0;i<n;i++)
	{
	 if(adj[v][i]&&!visited[i])
	 {
	  dfs(i,n);
	  }
	 }
	stack[++top]=v;
}
void topologicalsort(int n)
{
	for(int i=0;i<n;i++)
	{
	 if(!visited[i])
	 {
	  dfs(i,n);
	  }
	 }
    printf("topological order:");
    while(top>=0)
    {
     printf("%d",stack[top--]);
    }
    printf("\n");
}
int main()
{
	int n,e,u,v;
	printf("Enter the number of vertices:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	   for(int j=0;j<n;j++)
	   {
	   adj[i][j]=0;
	   }
	   visited[i]=0;
	 }
printf("Enter the number of edges:");
scanf("%d",&e);
printf("enter the edges(u,v)(0-based index):\n");
for(int i=0;i<e;i++)
{
  scanf("%d%d",&u,&v);
  addEdge(u,v);
}
topologicalsort(n);
return 0;
}
