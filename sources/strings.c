//---------------------------------------------------------------------------------------------------------------------
// c.c
//
// <Explanation of the program ...>
// <... May have multiple lines.>
//
//---------------------------------------------------------------------------------------------------------------------
//
//measure the total time of program execution:
#include "strings.h"
#define POSITIVE
#ifndef POSITIVE
#error "You're not positive!!!"
#endif
// #error Something
void testing(void);
void clocks(void);
//---------------------------------------------------------------------------------------------------------------------
///
/// This is an example header comment. Here, you explain, what the
/// function does. Copypaste and adapt it!
///
/// @param numbers an array to check
/// @param length The length of the array. If this text is too long you can
///
/// @return the highest number
//
int main(void)
{
  clock_t exec_time = clock();

  testing();
  clocks();
  printf("Before exiting the total time spent is: %lf", (clock() - exec_time)/ (double)CLOCKS_PER_SEC);
  return 0;
}
void testing(void)
{
  //memcopy: dest, sources, size, 
  char arr[] = "Day";
  char arr_copy[4];
  memcpy(arr_copy, arr, sizeof(char)*2);//two chars are copied
  arr_copy[2] = '\0';
  long int integer_1 = 234232423;
  short int integer_2;
  memcpy(&integer_2, &integer_1, sizeof(short int));//any memory block can be copied;
  puts(arr_copy);
  fprintf(stdout, "%i\n", integer_2);//print out the second integer
}
//clock:
void clocks(void)
{
  //time.h included:
  //recorded the processor time used for the loop:
  clock_t clock_time = clock();

  for(int i = 0; i < 10; ++i)
  {
    fprintf(stdout, "\n%d", i);
  }
  double time_used = (clock() - clock_time) /(double) CLOCKS_PER_SEC;
  fprintf(stdout, "The time used to print using the fprintf() method: %lf", time_used);
  clock_t clock_time_2 = clock();
  for(int i = 0; i < 10; ++i)
  {
    printf("\n%d", i);
  }
  // assert(0);//if the value of the assertion is nonzero, it's alright, else it's wrong.
  printf("Time used to print using the printf() method: %lf",( clock() - clock_time_2 ) / (double)CLOCKS_PER_SEC);
} 