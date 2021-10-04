#include <stdio.h>
#include <limits.h>
#include "math.h"





char opp;
float num1 ,num2,res;



int main() {

    printf("Enter mathematical expression: ");
    scanf("%f%c%f",&num1,&opp,&num2);



    do{
        switch (opp) {
            case '+':
                printf("%f",adder(num1,num2));

                break;
            case '-':res = subtract(num1,num2);
                break;


            case '*':res = multiply(num1,num2);
                break;
            case '/': res = divide(num1,num2);
               break;
            case '^':res = power(num1,num2);
                break;


            case '$':res = rpower(num1,num2);
                break;
            default:printf("Enter valid operation");
                     break;

        }
        printf("%f",res);
    }while(opp =='+' && opp == '-' && opp==  '*' && opp == '/' && opp == '^' && opp == '$' );{
        return 0;
    }
}





