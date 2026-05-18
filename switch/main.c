#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;
    char arithoper;

    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    printf("Enter an operator: ");
    scanf(" %c", &arithoper);


    switch(arithoper){

        case '+':{printf("The sum is %d", num1 + num2);
        break;}

        case '-':{printf("The difference is %d", num1 - num2);
        break;}

        case '*':{printf("The product is %d", num1 * num2);
        break;}

        case '/':{printf("The quotient is %f",(double)num1 / num2);
        break;}

        case '%':{printf("The remainder is %d", num1 % num2);
        break;}

        default:{printf("Wrong operator! \n");
        }
    }
return 0;

}
