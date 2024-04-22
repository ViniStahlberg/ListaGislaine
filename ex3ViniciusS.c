#include <stdio.h>

int franquia(total);

int main()
{
    float preco, total, preco2;
    int tipo, regiao, franq;
    printf("qual o preço do carro: ");
    scanf("%f", &preco);
    printf("qual o tipo do carro\n [1]pequeno\n [2]médio\n [3]grande\n");
    scanf("%d", &tipo);
    printf("qual a região onde será licenciado:\n [1]Norte e Nordeste\n [2]Sul e Centro-Oeste\n [3]Sudeste\n [4]São Paulo\n [5]Rio\n");
    scanf("%d", &regiao);

    preco2 = preco;

    if (tipo == 1){
        preco = preco * 1.08;
    }
    else{
        if (tipo == 2){
            preco *= 1.12;
        }
        else{
            preco *= 1.1;
        }
    }

    if (regiao == 1){
        preco2 = preco2 * 0.03;
    }
    else{
        if (regiao == 2){
            preco2 *= 0.05;
        }
        else{
            if (regiao == 3){
                preco2 *= 0.08;
            }
            else{
                if (regiao == 4){
                    preco2 *= 0.1;
                }
                else{
                    preco2 *= 0.15;
                }
            }
        }
    }

    total = preco2 + preco;
    franq = franquia(total);

    printf("o preço total do seguro do carro é de: R$%f e a franquia é: R$%d", total, franq);
}

int franquia(int total){
    int val;
    if(total <= 300){
        val = 400;
    }
    else{
        if(total >= 300 && total <= 500){
            val = 600;
        }
        else{
            val = 800;
        }
    }
    return val;
}