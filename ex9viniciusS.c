#include <stdio.h>

void calcMes(int mes);

int main(){
    int mes;

    printf("digite um número para ter o mês correspondente");
    scanf("%d", &mes);

    calcMes(mes);
    
}

void calcMes(int mes){
    if(mes == 1){
        printf("janeiro");
    }
    else{
        if(mes == 2){
            printf("fevereiro");
        }
        else{
            if(mes == 3){
                printf("março");
            }
            else{
                if(mes == 4){
                    printf("abril");
                }
                else{
                    if(mes == 5){
                        printf("maio");
                    }
                    else{
                        if(mes == 6){
                            printf("junho");
                        }
                        else{
                            if(mes == 7){
                                printf("julho");
                            }
                            else{
                                if(mes == 8){
                                    printf("agosto");
                                }
                                else{
                                    if(mes == 9){
                                        printf("setembro");
                                    }
                                    else{
                                        if(mes == 10){
                                            printf("outubro");
                                        }
                                        else{
                                            if(mes == 11){
                                                printf("novembro");
                                            }
                                            else{
                                                if(mes == 12){
                                                    printf("dezembro");
                                                }
                                                else{
                                                    printf("digite um número de 1 a 12");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}