#include <stdio.h>

void troca(num1,num2);

int main(){
    int num1,num2, aux;
    printf("digite dois valores inteiros separados por ENTER: ");
    scanf("%i%i", &num1,&num2);
    troca(num1,num2);
}

void troca(num1,num2){
    int aux;
    if(num1 > num2){
        aux = num1;
        num1 = num2;
        num2 = aux;
        printf("agora o valor do primeiro número é: %i e o segundo número é: %i", num1, num2);
    }else{
        printf("segundo valor maior que o primeiro");
    }
}