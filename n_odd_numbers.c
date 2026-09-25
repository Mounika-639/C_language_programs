#include <stdio.h>

int main()
{
    int number, odd_counter, last_odd_number;
    
    printf("how many odd numbers you want ? ");
    scanf("%i", &number);
    printf("The first %i odd numbers are ", number);
    odd_counter = 1;
    last_odd_number = ( 2 * number)-1;
    while (odd_counter < last_odd_number - 1)
    {
        printf("%i, ", odd_counter);
        odd_counter = odd_counter + 2;
    }
    printf("%i.\n",odd_counter);
    
    return 0;
}
