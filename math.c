//
// Created by Beck Sonstein on 9/30/21.
//

#include "math.h"


float adder(float n1,float n2){
    float res= n1 + n2;
    return res;

}

float subtract(float a, float b){

    float ans =  a-b;
    return ans;
}

float multiply(float a, float b){

    float ans =  a*b;
    return ans;
}

float divide(float a, float b){

    float ans =  a/b;
    return ans;
}

float power(float a, float b){
    float ans;int i; int pow = 1;
    for(i = 1; i<=b;i++){
        pow = pow * a;

    }
    return pow;

}
float rpower(float a, float b){
    float ans;
    if(b!=0){
        return a* rpower(a, b - 1);;

    }else {
        return 1;



    }
}


