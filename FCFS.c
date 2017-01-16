#include<stdio.h>

int main()
{
    int n, BT[20],WT[20],TAT[20],wt=0,tat=0,i,j;
    printf("Enter the total numbr of processes \n");
    scanf(" %d",&n);
    printf("Enter process Burst Time ");
    for(i=0;i<n;i++)
    {
        printf("Process: %d ",i+1);
        scanf(" %d",&BT[i]);
    }
    WT[0]=0;
    for(i=1;i<n;i++)
    {
        WT[i]=0;
        for(j=0;j<i;j++)
            WT[i]+=BT[j];

    }
    printf("Process\t\tBurst Time\tTurn Arount Time\tWaiting Time");

    for(i=0;i<n;i++)
    {
        TAT[i]=WT[i]+BT[i];
        wt+=WT[i];
        tat+=TAT[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t\t%d",i+1,BT[i],TAT[i],WT[i]);
    }
    wt/=i;
    tat/=i;
    printf("\nAverage Waiting time=%d\n",wt);
    printf("\nAverage Turn Around Time=%d",tat);
    return (0);
}
