#include <stdio.h>
#include <stdlib.h>
#define infinity 999
void dij(int n,int v,int cost[10][10],int dist[])
{
    int i,flag[10],w,u;
    for(i=1;i<=n;i++)
    flag[i]=0,dist[i]=cost[v][i];
    int count=2;
    while(count<=n)
    {
       int min=99;
        for(w=1;w<=n;w++)
            if(dist[w]<min && !flag[w])
                    min=dist[w],u=w;
                    flag[u]=1;
                    count++;
        for(w=1;w<=n;w++)
            if((dist[u]+cost[u][w]<dist[w]) && !flag[w])
                dist[w]=dist[u]+cost[u][w];

   }
}

int main()
{
    int n,i,v,j,cost[10][10],dist[10];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
        scanf("%d",&cost[i][j]);
        if(cost[i][j]==0)
        cost[i][j]=infinity;
        }
    scanf("%d",&v);
    dij(n,v,cost,dist);
    printf("shortest path:\n");
    for(i=1;i<=n ;i++)
        if(i!=v)
        printf("%d %d %d\n", v , i , dist[i]);
    return 0;
}

