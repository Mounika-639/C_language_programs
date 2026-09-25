#include <stdio.h>

int main()
{
   int number, even_counter;
   
   printf("up to which number you want to print even number ? ");
   scanf("%i", &number);
   printf("The even numbers up to %i are ", number);
   even_counter = 0;
   while(even_counter < number - 1)
   {
     printf("%i, ",even_counter);
     even_counter = even_counter + 2 ;
   }
   printf("%i.\n",even_counter);
   
  return 0;
}

