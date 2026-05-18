#include <stdio.h>
#include <stdlib.h>

int main (){
    int number;

    printf("Enter a number: \n");
    scanf("%d", &number);

    if(number%2 == 0){
        printf("The number %d is even", number);
    }

    return 0;

}
