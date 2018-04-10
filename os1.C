#include <stdio.h>
struct queue1
{
	int w_time,t_time,wt[10],pr[10],at[10],bt[10],r							
}temp[10];
int main()
{
	int i;
	for (i= 0;i<3;++i)
	{
		while(i==0)
		{
			//int temp[i].w_time=0,temp[i].t_time=0;
			printf("this is queue=%d",i+1 );
			int count,j,n,time,remain,flag=0,time_quantum=4; 
			 printf("/nEnter Total Process:\t "); 
             scanf("%d",&n); 
             remain=n; 
  for(count=0;count<n;count++) 
  { 
    printf("/nEnter Arrival Time and Burst Time for Process Process Number %d :",count+1); 
    scanf("%d",&temp[i].at[count]); 
    scanf("%d",&temp[i].bt[count]); 
    temp[i].rt[count]=temp[i].bt[count]; 
  } 
  printf("/nquantum time for process is:-%d",&time_quantum );
 printf("/n/nprocess\t|turn around time|waiting time\n\n" );
  for(time=0,count=0;remain!=0;) 
  { 
    if(temp[i].rt[count]<=time_quantum && temp[i].rt[count]>0) 
    { 
      time+=temp[i].rt[count]; 
      temp[i].rt[count]=0; 
      flag=1; 
    } 
    else if(temp[i].rt[count]>0) 
    { 
      temp[i].rt[count]-=time_quantum; 
      time+=time_quantum; 
    } 
    if(temp[i].rt[count]==0 && flag==1) 
    { 
      remain--; 
      printf("P[%d]\t|\t%d\t|\t%d\n",count+1,time-temp[i].at[count],time-temp[i].at[count]-temp[i].bt[count]); 
      temp[i].w_time+=time-temp[i].at[count]-temp[i].bt[count]; 
      temp[i].t_time+=time-temp[i].at[count]; 
      flag=0; 
    } 
    if(count==n-1) 
      count=0; 
    else if(temp[i].at[count+1]<=time) 
      count++; 
    else 
      count=0; 
  } 
  printf("\nAverage Waiting Time= %f\n",temp[i].w_time*1.0/n); 
  printf("Avg Turnaround Time = %f\n",temp[i].t_time*1.0/n); 
  
  break; 
 
		}
while(i==1)
{
	int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
    printf("Enter total number of processes(maximum 20):");
    scanf("%d",&n);
 
    printf("\nEnter Process Burst Time\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
 
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
 
    avwt/=i;
    avtat/=i;
    printf("\n\nAverage Waiting Time:%d",avwt);
    printf("\nAverage Turnaround Time:%d",avtat);
 break;

}
while(i==2)
{
	printf("\nits queue %d",i+1);
     int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
    float avg_wt,avg_tat;
    printf("Enter number of process:");
    scanf("%d",&n);
 
    printf("\nEnter Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;           //contains process number
    }
 
    //sorting burst time in ascending order using selection sort
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
 
    wt[0]=0;            //waiting time for first process will be zero
 
    //calculate waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
 
        total+=wt[i];
    }
 
    avg_wt=(float)total/n;      //average waiting time
    total=0;
 
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];     //calculate turnaround time
        total+=tat[i];
        printf("\np%d\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
 
    avg_tat=(float)total/n;     //average turnaround time
    printf("\n\nAverage Waiting Time=%f",avg_wt);
    printf("\nAverage Turnaround Time=%f\n",avg_tat);
}

	}
}
