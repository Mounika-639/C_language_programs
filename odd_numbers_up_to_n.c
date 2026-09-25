#include <stdio.h>

int main()
{
    int number, odd_counter;

    printf("Up to which number you want to print odd number ? ");
    scanf("%i", &number);
    printf("The odd numbers up to %i are ", number);
    odd_counter = 1;
    while(odd_counter < number - 1)
    {
        printf("%i, ",odd_counter);
        odd_counter = odd_counter + 2 ;
    }
    printf("%i.\n",odd_counter);
  
    return 0;
}
