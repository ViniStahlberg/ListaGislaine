#include <stdio.h>

void calc(int num);

int main(){
    int num;

    printf("digite um número de 4 digitos:");
    scanf("%d", &num);

    int prim = num / 100;
    int ult = num % 100;
    int soma = prim + ult;
    int quadrado = soma * soma;

    calc(num);
}

void calc(int num){
    int prim = num / 100;
    int ult = num % 100;
    int soma = prim + ult;
    int quadrado = soma * soma;

    if(quadrado == num){
        printf("possui a caracteristica");
    }else{
        printf("não possui a característica");
    }
}