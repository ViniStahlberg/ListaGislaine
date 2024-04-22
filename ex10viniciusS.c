#include <stdio.h>

float calc(float valor);

int main(){
    char nome [100];
    float valor, valorLucro;

    printf("digite o nome do produto");
    scanf("%99s", &nome);

    printf("digite o valor da compra:");
    scanf("%f", &valor);

    valorLucro = calc(valor);
    
    printf("%s %f", nome, valorLucro); 
}

float calc(float valor){
    if(valor < 10){
        return valor *= 1.7;
    }
    else{
        if(valor < 30 && valor >= 10){
            return valor *= 1.5;
        }
        else{
            if(valor >= 30 && valor < 50){
                return valor *= 1.4;
            }
            else{
                return valor *= 1.3;
            }
        }
    }
}