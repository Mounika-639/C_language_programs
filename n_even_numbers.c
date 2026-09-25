#include <stdio.h>

int main()
{
    int number, counter, last_even_number ;
    printf("How many even numbers you want to print ? ");
    scanf("%i", &number);
    printf("The even numbers up to %i are ", number);
    counter = 0;
    last_even_number = (2 * number)-2;
    while(counter < last_even_number - 1)
    {
        printf("%i, ",counter);
        counter = counter + 2;
    }
    printf("%i\n",last_even_number);
  
    return 0;
}
  
 
