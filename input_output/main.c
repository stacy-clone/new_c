#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1=13;
    int num2=17;
    int sum=num1 + num2;
    int num3, num4, sum1;


    printf("Hello world! I love programming.\n");
    printf("Num1 = %d \n", num1);
    printf("Num2 = %d \n", num2);
    printf("Enter two integers: \n");
    scanf(" %d %d", &num3, &num4);

    sum1= num3 + num4;


    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    printf("The sum of %d and %d is %d\n", num3, num4, sum1);

    return 0;
}
