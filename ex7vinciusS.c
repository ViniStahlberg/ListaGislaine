#include <stdio.h>

int main(){

    int numi;
    float a, b, c;

    printf("digite um valor inteiro e positivo para i");
    scanf("%d", &numi);
    printf("digite um valor real para a");
    scanf("%f", &a);
    printf("digite um valor real para b");
    scanf("%f", &b);
    printf("digite um valor real para c");
    scanf("%f", &c);

    if(numi == 2){
        if(a > b && a > c && b > c){
            printf("%f %f %f", a, b, c);
        }
        else{
            if(a > b && a > c && c > b){
               printf("%f %f %f", a, c, b); 
            }
            else{
                if(b > a && b > c && a > c){
                    printf("%f %f %f", b, a, c); 
                }
                else{
                    if(b > a && b > c && c > a){
                        printf("%f %f %f", b, c, a);
                    }
                    else{
                        if(c > a && c > b && a > b){
                            printf("%f %f %f", c, a, b);
                        }
                        else{
                            printf("%f %f %f", c, b, a);
                        }
                    }
                }
            }
        }
    }else{
        if(numi == 1){
            if(a < b && a < c && b < c){
                printf("%f %f %f", a, b, c);
            }
            else{
                if(a < b && a < c && c < b){
                    printf("%f %f %f", a, c, b); 
                }
                else{
                    if(b < a && b < c && a < c){
                        printf("%f %f %f", b, a, c); 
                    }
                    else{
                        if(b < a && b < c && c < a){
                            printf("%f %f %f", b, c, a);
                        }
                        else{
                            if(c < a && c < b && a < b){
                                printf("%f %f %f", c, a, b);
                            }
                            else{
                                printf("%f %f %f", c, b, a);
                            }
                        }    
                    }
                }
            }
        }else{
            if(numi == 3){
                if(a > b && a > c){
                    printf("%f %f %f", b, a, c);
                }
                else{
                    if(b > a && b > c){
                        printf("%f %f %f", a, b, c);
                    }
                    else{
                        printf("%f %f %f", a, c, b);
                    }
                }
            }else{
                printf("digite um valor para 'i' de um a 3");
            }
        }
    }
}