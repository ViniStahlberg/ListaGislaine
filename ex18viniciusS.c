#include <stdio.h>

void calc(int num);

int main() {
    int num;
    
    printf("Digite um número inteiro de 5 dígitos: ");
    scanf("%d", &num);
    
    calc(num);
}

void calc(int num){
    int original = num;
    int inverso = 0;
    
    inverso += num % 10 * 10000;
    num /= 10;
    inverso += num % 10 * 1000;
    num /= 10;
    inverso += num % 10 * 100;
    num /= 10;
    inverso += num % 10 * 10;
    num /= 10;
    inverso += num % 10;
    
    if (original == inverso){
        printf("é palíndromo");
    }
    else{
        printf("não é palíndromo");
    } 
}