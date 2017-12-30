#include<stdio.h>
 void main()
    {
        int no,i;
        printf("Enter the no of processes:");
        scanf("%d",&no);
        int p[no],at[no],bt[no],ct[no];
        for(i=0;i<no;i++)
        {
            printf("Enter the arrival time for process %d :",i+1);
            scanf("%d",&at[i]);
            printf("Enter the burst time for process %d :",i+1);
            scanf("%d",&bt[i]);
        }
    }