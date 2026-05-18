#include <stdio.h>
#include <stdlib.h>

int main(){
    int marks;

    printf("Enter your marks: \n");
    scanf("%d", &marks);

    if(marks<=39){
        printf("Your grade is E. \n");
    }
    else if(marks<=49){
        printf("Your grade is D. \n");
    }
    else if(marks<=59){
        printf("Your grade is C. \n");
    }
    else if(marks<=69){
        printf("Your grade is B. \n");
    }
    else if(marks<=100){
        printf("Your grade is A. \n");
    }
    else{
        printf("The marks you entered are invalid");
    }

    return 0;

}
