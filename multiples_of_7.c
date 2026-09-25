#include <stdio.h>

int main()
{
    int number, multiple;

    printf("How many multiples of 7 you want to print ? ");
    scanf("%i", &number);
    printf("The first %i multiples of 7 are ",number);
    multiple = 7;
    while (multiple != (number * 7))
    {
        printf("%i, ",multiple);
        multiple = multiple + 7;
    }
    printf("%i.\n", multiple);
    
    return 0;
}
