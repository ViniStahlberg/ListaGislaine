#include <stdio.h>

float total(int pag, float valor);

int main(){
    float valor, valorTotal;
    int pag;

    printf("digite o valor do produto na etiqueta: ");
    scanf("%f", &valor);
    printf("[1]À vista em dinheiro ou cheque, recebe 10%% de desconto\n[2]À vista no cartão de crédito, recebe 5%% de desconto\n[3]Em 2 vezes, preço normal da etiqueta sem juros\n[4]Em 3 vezes, preço normal da etiqueta mais juros de 10%%");
    scanf("%d", &pag);

    valorTotal = total(pag, valor);

    printf("o valor total à ser pago é: %f", valorTotal);

}

float total(int pag, float valor){
    if(pag == 1){
        return valor * 0.9;
    }
    else{
        if(pag == 2){
            return valor * 0.95;
        }
        else{
            if(pag == 3){
                return valor;
            }
            else{
                return valor * 1.1;
            }
        }
    }
}