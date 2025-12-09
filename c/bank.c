#include<stdio.h>
int main()
{
    int m,n,i,j,k,y,alloc[20][20],max[20][20],avil[50],ind=0;
    printf("enter the no of process:");
    scanf("%d",&n);
    printf("enter the no of resource:");
    scanf("%d",&m);
    printf("enter the allocation matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&alloc[i][j]);
        }
    }
    printf("enter the max matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&max[i][j]);
        }
    }
    printf("enter the available matrix:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&avil[i]);
    }
    int need[n][m],fin[n],safe[n],work[m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            need[i][j]=max[i][j]-alloc[i][j];
        }
    }
    printf("need matrix\n");
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<m;j++)
        {
            printf("%d",need[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        work[i]=avil[i];
    }
    for(i=0;i<n;i++)
    fin[i]=0;
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            if(fin[i]==0)
            {
                int flag=0;
                for(j=0;j<m;j++)
                {
                    if(need[i][j]>work[j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    safe[ind++]=i;
                    for(int y=0;y<m;y++)
                    {
                        work[y]+=alloc[i][y];
                        fin[i]=1;
                    }
                }
            }

        }
    }
    printf("\nsafe sequence is :\n");
    for(i=0;i<=n-1;i++)
    {
        printf("p%d->",safe[i]);
    }
    
}
