#include <stdio.h>

int main()
{
    int num1, num2, num3, max;
   
    printf("Finding the maximum element among the given numbers.\n");
    printf("Enter the first number: ");
    scanf("%i", &num1);
    printf("Enter the second number: ");
    scanf("%i", &num2);
    printf("Enter the third number: ");
    scanf("%i", &num3);
    printf("Maximum of %i, %i and %i is ", num1, num2, num3);
    max = num1 ;
    if(num2 > max)
    {
        max = num2;
    }
    if(num3 > max)
    {
        max = num3;
    }
    printf("%i.\n", max);
   
    return 0;
}
