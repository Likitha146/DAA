#include <stdio.h>
#include <stdlib.h>
void bfs(int a[10][10],int n,int visited[10],int source)
{
    int q[10],rear=-1,i,delnode,front=0;
    visited[source]=1;
    q[++rear]=source;
    while(front<=rear)
    {
       delnode=q[front++];
       for(i=1;i<=1;i++)
      {
          if(a[delnode][i]==1&&visited[i]==0)
          {
              q[++rear]=i;
              visited[i]=1;
          }
     }
    }
}
int main()
{
    int n,a[10][10],i,j,visited[10],count=0;
    printf("\n Enter the number of nodes");
    scanf("\n Read adjacent matrix");
    for(i=1;i<n;j++)
    {
        for(j=1;j<=n;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
        visited[i]=0;
    for(i=1;i<=n;i++)
    {
        if (visited[i]==0)
    {
        bfs(a,n,visited,i);
        count++;
    }
}
if(count==1)
    printf("\n Graph connected,%d component",count);
    else
    printf("\n Graph not connected,%d component");
    return 0;
}



