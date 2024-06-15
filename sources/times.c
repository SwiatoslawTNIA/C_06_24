#include "stdio.h"
#include "time.h"
#include "stdbool.h"
#include "stdlib.h"

int main(void)
{
   // clock_t time = clock();
   // printf("Program is running.");
   // printf("\nThe value of clock: %ld", clock());
   // printf("\nThe value of clock: %ld", clock());
   // printf("\nThe value of clock: %ld", clock());

   // printf("Time to run the program: %.10ld", (clock() - time) / CLOCKS_PER_SEC);
   time_t time_1 = time(NULL);
   //wait for one second:
   clock_t current_time = clock();
   printf("%ld", time_1);
   fflush(stdout);//now it works
   while((clock() - current_time)  / CLOCKS_PER_SEC < 1)
      ;//wait for one sec;
   printf("The new time: %ld", time(NULL));
   //the structure struct tm:
   struct tm new_structure;
   printf("%d", new_structure.tm_mday);
   //another func:
   //time_t difftime(time_t time1, time_t time2);//returns the difference time1 - time2
   //another func: mktime: convert a struct tm pointer to time_t value, returning it:
   //syntax: time_t mktime(struct tm *p);
   return 0;
}