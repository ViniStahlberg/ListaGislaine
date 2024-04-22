#include <stdio.h>
#include <math.h>

void calc(float a, float b, float c);

int main() {
    float a, b, c;
    
    printf("Digite o valor de a:");
    scanf("%f", &a);
    printf("Digite o valor de b:");
    scanf("%f", &b);
    printf("Digite o valor de c:");
    scanf("%f", &c);

    calc(a, b, c);
}

void calc(float a, float b, float c) {
	
    float form, raiz1, raiz2;

    form = b * b - 4 * a * c;

    if (form > 0) {
        raiz1 = (-b + sqrt(form)) / (2 * a);
        raiz2 = (-b - sqrt(form)) / (2 * a);
        printf("%f e %f", raiz1, raiz2);
    } 
    else{
        raiz1 = -b / (2 * a);
        printf("%f", raiz1);
    } 
    
}