#include<stdio.h>
struct process
{ 
    int p_no; 
	int Arrival_time; 
	int Burst_time; 
// to print in last 
    int BTbackup; 
    int Waiting_time; 
    int Turnaround_time; 
    int Completion_time; 
}; 
struct process p[3]; 
int totaltime = 0; 
int prefinaltotal = 0; 
bool compare(process p1, process p2) 
{ 
    return p1.Arrival_time < p2.Arrival_time; 
} 
int main() 
{ 
  
    int a; 
    for (a = 0; a < 3; a++) { 
        p[0].p_no = (2132);
		p[1].p_no=(2102) ;
		p[2].p_no=(2453);
    } 
    for (a = 0; a < 3; a++)  
    { 
        p[0].Arrival_time = (0); 
        p[0].Arrival_time=(0);
        p[0].Arrival_time=(0);
    } 
    for (a = 0; a < 3; a++) { 
        p[0].Burst_time = (2);
		p[1].Burst_time=(4) ;
		p[2].Burst_time=(8);
        p[a].BTbackup = p[a].Burst_time; 
        prefinaltotal += p[a].Burst_time; 
    } 
    printf("PNo\tAT\tBT\n"); 
  
    for (a = 0; a < 3; a++) { 
        printf( "%d\t",p[a].p_no ); 
        printf("%d\t",p[a].Arrival_time ); 
        printf("%d\t\n" ,p[a].Burst_time ); 
    } 
    totaltime += p[0].Arrival_time; 
    prefinaltotal += p[0].Arrival_time; 
    int totalWT = 0; 
    int totalTAT = 0; 
    for (a = 0; a < 4; a++) { 
        p[a].Turnaround_time = p[a].Completion_time - p[a].Arrival_time; 
        p[a].Waiting_time = p[a].Turnaround_time - p[a].BTbackup;  
        totalWT += p[a].Waiting_time; 
        totalTAT += p[a].Turnaround_time; 
    }  
  
    for (a = 0; a < 3; a++) { 
        printf ("%d",p[a].p_no ); 
        printf("%d",p[a].Arrival_time ); 
        printf( "%d",p[a].BTbackup);
        printf ("%d", p[a].Completion_time ); 
        printf("%d", p[a].Turnaround_time ); 
        printf( "%d",p[a].Waiting_time );  
    } 
    printf( "Total Turnaround_time = %d" ,totalTAT); 
    printf( "Average Turnaround_time = %f" ,(totalTAT/4.0));
    printf("Total Waiting_time =%d \n",totalWT);
    printf( "Average Waiting_time = %f\n" ,(totalWT/4.0));
    return 0; 
} 

