#include <stdio.h>

float metade(float num);

int main(){

    float num, aux;

    printf("digite um número");
    scanf("%f", &num);

    aux = metade(num);

    printf("%.2f", aux);
}

float metade(float num){
    if(num > 20){
        return num / 2;
    }
    else{
        return 0;
    }
}