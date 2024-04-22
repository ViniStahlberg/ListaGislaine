#include <stdio.h>

int total(float horasEx, float horasAus);

int main(){
    char nome[100];
    float horasExtras, horasAusencia, grat;

    printf("digite o seu nome:");
    scanf("%99s", &nome);
    printf("quantas horas extras:");
    scanf("%f", &horasExtras);
    printf("quantas horas de ausência:");
    scanf("%f", &horasAusencia);

    grat = total(horasExtras, horasAusencia);

    printf("%s tem uma gratificação de R$%.2f à receber", nome, grat);
}

int total(float horasEx, float horasAus){
    float horas = horasEx - (2/3 * (horasAus) );

    if(horas > 2400){
        return 500;
    }
    else{
        if(horas >= 1800 && horas < 2400){
            return 400;
        }
        else{
            if(horas >= 1200 && horas < 1800){
                return 300;
            }
            else{
                if(horas >= 600 && horas < 1200){
                    return 200;
                }
                else{
                    return 100;
                }
            }
        }
    }
}