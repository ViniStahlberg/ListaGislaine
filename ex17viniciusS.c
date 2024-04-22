#include <stdio.h>

void calc(int n);

int main(){
    int n1,n2,n3,n4;

    printf("digite 4 número inteiros separados por ENTER");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    calc(n1);
    calc(n2);
    calc(n3);
    calc(n4);    
    
}

void calc(int n){
    if(n % 2 == 0 || n % 3 == 0){
        printf("%d\n", n);
    }
}