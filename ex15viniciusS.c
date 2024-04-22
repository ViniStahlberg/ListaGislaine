#include <stdio.h>

void calc(int anos);

int main(){
    int anos;

    printf("digite sua idade em anos: ");
    scanf("%d", &anos);

    calc(anos);
}

void calc(int anos){
    int meses = anos * 12;
    int dias = meses * 30;

    printf("%d meses\n", meses);
    printf("%d dias", dias);
}