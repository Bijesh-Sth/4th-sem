#include<stdio.h>
#include<conio.h>
struct process{
    int n;
    int arrival;
    int burst;
    int completed;
    int turnaround;
    int wait;
};
int main(){
    struct process p[3];
    int i,t,w,time=0; 
    float sumw=0,sumt=0;
    p[0].arrival=0;
    p[1].arrival=4;
    p[2].arrival=5;
    p[0].burst=2;
    p[1].burst=3;
    p[2].burst=1;
    printf("\nProcess \tArrival \tBurst\n");
    for(i=0;i<3;i++){
        p[i].n=i;
        printf("%d \t\t%d \t\t%d\n",p[i].n,p[i].arrival,p[i].burst);
    }
printf("\n GAntt Chart\n");
i=0;
while (i<3)
{
    if(time>=p[i].arrival){
        time += p[i].burst;
        printf("P%d ",i);
        p[i].completed=time;
        i++;
    }
    else{
        time++;
        printf("Wait ");
    }
}
 for(i=0;i<3;i++){
        p[i].turnaround=p[i].completed-p[i].arrival;
        p[i].wait=p[i].turnaround-p[i].burst;
        sumt += p[i].turnaround;
        sumw += p[i].wait;
    }
 printf("\n\nProcess \tArrival \tBurst \tCompleted \tTurnaround \tWait \n");
    for(i=0;i<3;i++){
        p[i].n=i;
        printf("%d \t\t%d \t\t%d \t\t%d \t\t%d \t%d\n",p[i].n,p[i].arrival,p[i].burst,p[i].completed,p[i].turnaround,p[i].wait);
    }
    t=sumt;
    w=sumw;
    printf("Total \t\t\t\t\t\t\t\t%d \t%d",t,w);
    printf("\n\nThe average Turnaround time is %f",sumt/3);
    printf("\nThe average Waiting time is %f",sumw/3);

    
    printf("\n\nBijesh Shrestha");
}