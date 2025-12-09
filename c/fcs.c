#include<stdio.h>
struct process
{
    int p,bt,wt,tat,ct;
}pid[20];
int main()
{
    int n,i;
    printf("\nenter the number of process :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        pid[i].p=i;
        printf("enter the burst time %d:",i);
        scanf("%d",&pid[i].bt);
    }
    pid[0].ct=0;
    for(i=0;i<n;i++)
    {
        pid[i].ct=pid[i-1].ct+pid[i].bt;
        pid[i].tat=pid[i].ct;
    }
    pid[0].wt=0;
    for(i=0;i<n;i++)
        pid[i].wt=pid[i].tat-pid[i].bt;
    printf("\nprocess excution order\n");
    for(i=0;i<n;i++)
        printf("p%d->",pid[i].p);
    printf("\nprocess\tburst\ttat\twait\n");
    for(i=0;i<n;i++)
        printf("\n%d\t%d\t%d\t%d",pid[i].p,pid[i].bt,pid[i].tat,pid[i].wt);
    float avgtat =0,avgwt =0;
    for(i=0;i<n;i++)
    {
        avgtat += pid[i].tat;
        avgwt += pid[i].wt;
    }
    printf("\naverage tat=%.2f", avgtat/n);
    printf("\naverage wt=%.2f", avgwt/n);
    return 0;
}