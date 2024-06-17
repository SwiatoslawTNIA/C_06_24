#include "stdio.h"
#include "time.h"
#include "stdbool.h"
#include "stdlib.h"
#include "assert.h"

int main(void)
{
   // clock_t time = clock();
   // printf("Program is running.");
   // printf("\nThe value of clock: %ld", clock());
   // printf("\nThe value of clock: %ld", clock());
   // printf("\nThe value of clock: %ld", clock());

   // printf("Time to run the program: %.10ld", (clock() - time) / CLOCKS_PER_SEC);
   // time_t time_1 = time(NULL);
   // //wait for one second:
   // printf("%ld", time_1);
   // fflush(stdout);//now it works
   // clock_t current_time = clock();
   // while((clock() - current_time)  / CLOCKS_PER_SEC < 1)
   //    ;//wait for one sec;
   // printf("The new time: %ld", time(NULL));
   //the structure struct tm:
   time_t time_2 = time(NULL);//returns the time in seconds
   struct tm *new_structure = gmtime(&time_2);
   printf("%d \n", new_structure->tm_year + 1900);
   printf("%d, day: %d", new_structure->tm_mon, new_structure->tm_mday);
   //another func:
   //time_t difftime(time_t time1, time_t time2);//returns the difference time1 - time2
   //another func: mktime: convert a struct tm pointer to time_t value, returning it:
   //syntax: time_t mktime(struct tm *p);
   //the ctime function returns a pointer to a string, describing the current time:
   char * current_time = ctime(&time_2);
   puts(current_time);
   //another func: char *asctime(const struct tm*);//basically it creates a string the same as ctime, 
   //but only from a struct tm pointer to object.
   // char * strftime(char array[], sizeof(array), "format:%dDjalsd.f.....", localtime(&time(NULL)));
   assert(123.123);
   //flush the buffers:
   fflush(stdin);
   fflush(stdout);
   free(current_time);
   free(new_structure);
   assert(123.123 - 123.123);//it calls to stderr + uses abort function;

   return 0;
}