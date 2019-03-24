/*Three students (a, b, c) are arriving in the mess at the same time. The id numbers of these students are 2132, 2102, 2453
 and the food taken time from the mess table is 2, 4 and 8 minutes. If the two students have same remaining time so it
  is broken by giving priority to the students with the lowest id number. Consider the longest remaining time first (LRTF) 
  scheduling algorithm and calculate the average turnaround time and waiting time.*/
#include<stdio.h>
int main()
{
	int id_number[3]={2132,2102,2453};
	int bust_time[3]={2,4,8};
	int arrival_time[3]={0,0,0};
	int c1=0,c2=0,c3=0;
	int i;
	printf("id number\tarrival time\tbust time\n");
	for(i=0;i<3;i++)
	{
	printf("%d\t\t%d\t\t%d\n",id_number[i],arrival_time[i],bust_time[i]);
    }
	
}
