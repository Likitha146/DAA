#include <stdio.h>
#include <stdlib.h>

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{

    int n,M,i,j,w[10],p[10],v[10][10],x[10]=[0];
    printf("\n read the num of objefcts:");
    scanf("%d",&n);
    printf("\n enter the weights of objects\n");
    for(i=1;i<=n;i++)
        scanf("%d",&w[i]);
    printf("\n enter profits\n");
    for(i=1;i<=n;i++)
        scanf("%d",&p[i]);
    printf("\n enter knapsack:");
    scanf("%d",&M);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=M;j++)
        {
            if(i==0||j==0)
                v[i][j]=0;
            else if(j<w[i])
                v[i][j]=v[i-1][j];
            else
                v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
            printf("%d\t",v[i][j]);

        }
        printf("\n");
    }
    i=n;
    j=M;
    while(i!=0&&j!=0)
    {

        if(v[i][j]!=v[i-1][j])
        {

            x[i]=1;
            j=j-w[i];

        }
        i=i-1;
    }

printf("\n the max profit obtained is %d",v[n][M]);
printf("\n the objects considered are");
printf("\n obj not weight\t profit\n");
for(i=1;i<=n;i++)
    if(x[i]==1)
    printf("%d\t%d\t%d\n",i,W[i],p[i]);
return 0;
}
