#include <stdio.h>

int hMax1(h1,h2);

int main(){
    double hBob = 1.1;
    double hCharlie = 1.5;

    int cont = hMax1(hBob, hCharlie);
    
    if(cont <= 15){
        printf("Bob passará Charlie daqui %i anos", cont);
    }else{
        printf("Bob não ficará mais alto do que Charlie");
    }
}

int hMax1(double h1, double h2){
    int cont = 1;
    while(h2 > h1){
        cont++;
        printf("%i", cont); 
        h1 += 0.25;
        h2 += 0.21;
    }
    return cont;
}


