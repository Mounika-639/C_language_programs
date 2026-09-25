#include <stdio.h>

int main()
{
    int num1, num2, temp;
  
    printf("Enter the first number: ");
    scanf("%i", &num1);
    printf("Enter the second number: ");
    scanf("%i", &num2);
    if(num2 > num1)
    { 
        temp = num1;
        num1 = num2;
        num2 = temp;
   }
   printf("%i is bigger than %i.\n", num1, num2);

   return 0;
}
