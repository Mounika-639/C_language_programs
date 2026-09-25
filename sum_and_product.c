#include <stdio.h>

int main()
{
    int sum, product, first_number, second_number;

    printf("To find two numbers given their sum and product.\n");
    printf("Enter the sum of two numbers: ");
    scanf("%i", &sum);
    printf("Enter their product: ");
    scanf("%i", &product);
    printf("The sum of two numbers is %i and their product is %i. ", sum,product);
    first_number = 1;
    second_number = product / first_number;
    while (first_number + second_number != sum)
    {
        first_number = first_number + 1;
        second_number = product / first_number;
    }
    while (first_number *  second_number != product )
    {
        first_number = first_number + 1;
        second_number = product / first_number;
        while (first_number + second_number != sum)
        {
            first_number = first_number + 1;
            second_number = product / first_number;
        }
        
    }
    printf("The two numbers are %i, %i.\n", first_number, second_number);  
    
    return 0;
}
