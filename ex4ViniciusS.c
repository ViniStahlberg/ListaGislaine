#include <stdio.h>

float calcsal(float sal);
int aumento(float sal);

int main(){
    int cod;
    float sal;

    printf("digite o código do funcionário: ");
    scanf("%d", &cod);
    printf("digite o salário atual do funcionário: ");
    scanf("%f", &sal);

    float salcorrigido = calcsal(sal);
    int aum = aumento(sal);
    printf("o funcionário:%d recebe R$%.2f, receberá uma aumento de: %d%%, logo seu salário será de:R$%.2f",cod, sal, aum, salcorrigido);
}

float calcsal(float sal){
    if(sal <= 400){
        return sal *= 1.15;
    }
    else{
        if(sal <= 700){
            return sal *= 1.12;
        }
        else{
            if(sal <= 1000){
                return sal *= 1.1;
            }
            else{
                if(sal <= 1800){
                    return sal *= 1.07;
                }
                else{
                    if(sal <= 2500){
                        return sal *= 1.04;
                    }
                    else{
                        return sal;
                    }
                }
            }
        }
    }
}

int aumento(float sal){
    if(sal <= 400){
        return 15;
    }
    else{
        if(sal <= 700){
            return 12;
        }
        else{
            if(sal <= 1000){
                return 10;
            }
            else{
                if(sal <= 1800){
                    return 7;
                }
                else{
                    if(sal <= 2500){
                        return 4;
                    }
                    else{
                        return 0;
                    }
                }
            }
        }
    }
}