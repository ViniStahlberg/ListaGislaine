#include <stdio.h>

void calc(idade);

int main(){
    int idade, facult;

    printf("digite sua idade: ");
    scanf("%d", &idade);
    
    calc(idade);
}

void calc(idade){
    if(idade < 16){
        printf("Não eleitor");
    }
    else{
        if(idade > 18 && idade < 65){
            printf("Eleitor obrigatório");
        }
        else{
            printf("Eleitor Facultativo");
        }
    }
}