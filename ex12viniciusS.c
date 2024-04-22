#include <stdio.h>

void calc(float reais);

int main(){

    float reais;

    printf("digite a quantidade em reais à ser convertida:");
    scanf("%f", &reais);

    calc(reais);
}

void calc(float reais){
    float dolar = reais / 5.24;
    float euro = reais / 5.58;

    printf("%f dolares e %f euros", dolar, euro);
}