#include<stdio.h>
struct process
{
    int pid,bt,wt,ct,tat;
}p[20],s;
int main()
{
    int i,j,n;
    printf("enter the number of process:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p[i].pid=i;
        printf("enter the burst time of process%d",i);
        scanf("%d",&p[i].bt);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(p[j].bt>p[j+1].bt)
            {
                s=p[j];
                p[j]=p[j+1];
                p[j+1]=s;
            }
        }
    }
    p[-1].ct=0;
    for(i=0;i<n;i++)
    {
        p[i].ct=p[i-1].ct+p[i].bt;
        p[i].tat=p[i].ct;
    }
    p[0].wt=0;
    for(i=1;i<n;i++)
    {
        p[i].wt=p[i].tat-p[i].bt;
    }
    printf("\nprocess excution order:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d->",p[i].pid);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(p[j].pid>p[j+1].pid)
            {
                s=p[j];
                p[j]=p[j+1];
                p[j+1]=s;
            }
        }
    }
printf("\nprocess\tburst\ttat\twait\n");
for(i=0;i<n;i++)
{
    printf("\n%d\t%d\t%d\t%d",p[i].pid,p[i].bt,p[i].tat,p[i].wt);
}
float avgtat =0,avgwt =0;
for(i=0;i<n;i++)
{
    avgtat += p[i].tat;
    avgwt += p[i].wt;
}
printf("\naverage tat=%.2f", avgtat/n);
printf("\naverage wt=%.2f", avgwt/n);
return 0;
}
    
    

