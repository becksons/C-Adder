#include <stdio.h>
#include <limits.h>
float adder(float a, float b);
float num1,num2;


float adder(float n1,float n2){
    float res= n1 +n2;
    return res;

}

int main() {
    int a = 7; char opp;
    printf("Enter mathematical expression: ");
    num1 = scanf("%f",num1);
    opp= scanf("%c",opp);
    num2 = scanf("%f",num2);


    do {


        switch (opp) {
            float x;
            case '+':

                x = adder(num1,num2);
                printf("Result: %f",x);

                break;


            default:
                printf("Result: ",x);
                return x;

        }


        break;
    }
    while(opp != ' ');{

        return 0;



    }





}
