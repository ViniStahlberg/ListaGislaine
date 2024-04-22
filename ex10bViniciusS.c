#include <stdio.h>

void verData(int data);

int main(){
	
	int data;
	
	printf ("Insira uma data");
	scanf ("%d", &data);
	
	verData(data);
	
}

void verData(int data){

	int ano = data % 10000;
	int mes = (data / 10000) % 100;
	int dia = data / 1000000;
	
    if(mes <= 12 && mes > 0){
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            if(dia > 0 && dia <= 31){
                printf("data valida");
            }else{
                printf("data invalida");
            }
        }else{
            if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
                if(dia > 0 && dia <= 30){
                    printf("data valida");
                }else{
                    printf("data invalida");
                }
            }else{
                if(mes == 2){
                    if(dia > 0 && dia <= 28){
                        printf("data valida");
                    }else{
                        printf("data invalida");
                    }
                }
            }
        }
    }else{
        printf("data invalida");
    }

	
}