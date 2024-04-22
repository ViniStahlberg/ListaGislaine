#include <stdio.h>

int calc(int cod, int cod2, int cod3, float aux);
int calc2(int cod, int cod2, int cod3, float aux);

int main(){
    int cod, cod2, cod3, codTotal, sexo, sexo2, sexo3, idade, idade2, idade3, idadeTotal, sexoFeminino, sexoMasculino, salTotal;
    char nome[100], nome2[100], nome3[100];
    float sal, sal2, sal3;

    printf("digite o primeiro código");
    scanf("%d", &cod);
    printf("digite o primeiro nome");
    scanf("%99s", &nome);
    printf("digite [1] para sexo masculino e [2] para feminino");
    scanf("%d", &sexo);
    printf("digite o primeiro salário");
    scanf("%f", &sal);
    printf("digite a idade do primeiro funcionário: ");
    scanf("%d", &idade);

    printf("digite o segundo código");
    scanf("%d", &cod2);
    printf("digite o segundo nome");
    scanf("%99s", &nome2);
    printf("digite [1] para sexo masculino e [2] para feminino");
    scanf("%d", &sexo2);
    printf("digite o segundo salário");
    scanf("%f", &sal2);
    printf("digite a idade do segundo funcionário:");
    scanf("%d", &idade2);

    printf("digite o terceiro código");
    scanf("%d", &cod3);
    printf("digite o terceiro nome");
    scanf("%99s", &nome3);
    printf("digite [1] para sexo masculino e [2] para feminino");
    scanf("%d", &sexo3);
    printf("digite o terceiro salário");
    scanf("%f", &sal3);
    printf("digite a idade do terceiro funcionário:");
    scanf("%d", &idade3);

    codTotal = calc(cod, cod2, cod3, 100);
    idadeTotal = calc(idade, idade2, idade3, 60);
    sexoFeminino = calc(sexo, sexo2, sexo3, 1.5);
    sexoMasculino = 3 - sexoFeminino;
    salTotal = calc2(sal, sal2, sal3, 1000);

    printf("%d códigos acima de 100, %d funcionários possuem idade maior que 60, %d são homens e %d são mulheres e %d funcionários recebem um salário entre 1000 e 2000", codTotal, idadeTotal, sexoMasculino, sexoFeminino, salTotal);

}

int calc(int cod, int cod2, int cod3, float aux){
    if(cod > aux && cod2 > aux && cod3 > aux){
        return 3;
    }
    else{
        if(cod > aux && cod2 > aux && cod3 < aux){
            return 2;
        }
        else{
            if(cod > aux && cod2 < aux && cod3 > aux){
                return 2;
            }
            else{
                if(cod < aux && cod2 > aux && cod3 > aux){
                    return 2;
                }
                else{
                    if(cod < aux && cod2 <  aux && cod3 < aux){
                        return 0;
                    }
                    else{
                        return 1;
                    }
                }
            }
        }
    }
}

int calc2(int cod, int cod2, int cod3, float aux){
    if(cod > aux && cod < 2000 && cod2 > aux && cod2 < 2000 && cod3 > aux && cod3 < 2000){
        return 3;
    }
    else{
        if(cod > aux && cod < 2000 && cod2 > aux && cod2 < 2000 && cod3 < aux && cod3 > 2000){
            return 2;
        }
        else{
            if(cod > aux && cod < 2000 && cod2 < aux && cod2 > 2000 && cod3 > aux && cod3 < 2000){
                return 2;
            }
            else{
                if(cod < aux && cod > 2000 && cod2 > aux && cod2 < 2000 && cod3 > aux && cod3 < 2000){
                    return 2;
                }
                else{
                    if(cod < aux && cod > 2000 && cod2 > 2000 && cod2 <  aux && cod3 > 2000 && cod3 < aux){
                        return 0;
                    }
                    else{
                        return 1;
                    }
                }
            }
        }
    }
}
