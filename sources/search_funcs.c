#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
   // printf("Genrally");
   //the first function is strchr:
   char string[] = "This is an example of a string.";
   // //returns a pointer to the first occurance:
   // char *first_t = strchr(string, 't');
   // char *new_look = strchr(string, 112);
   // char *not_found = strchr(string, 'q');//returns NULL
   // if(not_found == NULL)
   // {
   //    printf("Sorry, not found.");
   // }
   // fprintf(stdout, "\n, found: %c, the new_look value: %c", *first_t, *new_look);
   //memchr = the same as strchr(), but can be used with memory.
   //char *memchr(const char *s, int character, size_t search_scope)
   // char *p_to_a = memchr(string, 'a', 5);

   // if(p_to_a == NULL)
   // {
   //    printf("p_to_a is NULL");
   // }
   // else
   // {
   //  printf("%c", *p_to_a);
   // }
   


   //char *strrchr(const char *s, int character) searches in reverse order :
   // char *p_to_i = strrchr(string, 'i');
   // if(p_to_i == NULL)
   // {
   //    printf("p_to_a is NULL");
   // }
   // else
   // {
   //  printf("%c, the next char after i is: %c", *p_to_i,*( p_to_i + 1));
   // }
   //char *strpbrk(const char *string, const char *chars_to_choose_from)
   //searches for all of the chars in chars_to_choose_from and returns 
   //a pointer to the first occurence of any of those.
   // char *p_to_abc = strpbrk(string, "abcABC");//returns a pointer to the first of any values

   // if(p_to_abc == NULL)
   // {
   //    printf("p_to_abc is NULL");
   // }
   // else
   // {
   //  printf("%c, the next char after %c is: %c", *p_to_abc, *p_to_abc,*( p_to_abc + 1));
   // }

   //size_t strspn(const char *string, const char *chars_to_omit);
   //returns the index of the first element in the array, that is not in chars_to_omit:
   
   // int index_1 = strcspn(string, "This");
   // printf("%c%c%c", string[index_1], string[index_1 + 1], string[index_1 + 2]);
   //char *strstr(const char *string, const char *string_to_search_for)

   //the last method: void *memset(void *mem_block, int character, size_t size_of_memory)
   //set all the values of the string to "b":
   memset(string, 'b', sizeof(string));
   puts(string);
   return 0;
}