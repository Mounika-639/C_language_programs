#include <stdio.h>

int main()
{
    int number, counter, result;
    
    printf("which number nth power you would like to compute ? ")
    scanf("%i", &compute);
    printf("The nth power value of %i is ", number);
    counter = 1 ;
    result = 1;
    while (counter <= number)
    {
        result = result * number ;
        counter = counter + 1 ;
    } 
    printf("%i.\n", result);
   
    return 0;
}

