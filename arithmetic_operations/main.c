#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum, difference, product;
    double quotient;

    printf("Enter two numbers : \n");
    scanf("%d %d", &num1, &num2);

    sum= num1 + num2;
    difference= num1 - num2;
    product= num1 * num2;
    quotient= num1 / num2;

    printf("The sum of %d and %d is %d \n", num1, num2, sum);
    printf("The difference between %d and %d is %d \n", num1, num2, difference );
    printf("The product of %d and %d is %d \n", num1, num2, product );
    printf("The quotient of %d and %d is %f \n ", num1, num2, quotient );

    return 0;


}
