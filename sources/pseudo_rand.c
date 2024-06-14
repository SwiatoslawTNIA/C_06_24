#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
void func_1(void);
void func_2(void);
//the environ var are declared on the sys by default:
extern char **environ;
void simulate_abort(void)
{
   fprintf(stderr, "Wrong input, aborting...");
   abort();
}
int main(void)
{
   // //define a seed: 
   // srand(time(NULL));
   // //when the see is not used, even though ten numbers are generated "randomly"
   // //if the program is reexecuted, then the numbers will just repeat themselves.
   // //when the seed is used, the numbers are now pseudo-random

   // for(size_t n = 0; n < 10; ++n)
   // {
   //    int random_number = rand() % 10; // random number from 0 to 10:
   //    printf("%d, ", random_number);//
   // }

   //void abort(void);
   //terminates the program immediately, without calling atexit() or performing any cleaning tasks
   fprintf(stdout, "Start");
   // simulate_abort();
   {
      atexit(func_1);
      atexit(func_2);
   }
   fprintf(stdout, "Finish");
   
   if(1)
      return 0;
   
   //getenv:
   // for(int i = 0; environ[i] != NULL;++i)
   // {
   //    printf("%s", environ[i]);
   // }
   //now let's use system:
   // system("touch u.me");
   // printf("Do you want to delete the file \"u.me\""); 
   // char c = fgetc(stdin);
   // if(c == 'y')
   //    system("rm u.me");
   return 0;
}
void func_1(void)
{
   printf("Function_1 exiting...");
}
void func_2(void)
{
   printf("Function_2 exiting...");
}
