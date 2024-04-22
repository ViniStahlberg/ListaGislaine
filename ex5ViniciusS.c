#include <stdio.h>

void calc(int horaEntrada, int horaSaida, int totalHora, int totalMin, int minEntrada, int minSaida);

int main(){

    int horaEntrada, minEntrada, horaSaida, minSaida, totalHora, totalMin;

    printf("digite a hora de entrada:");
    scanf("%d", &horaEntrada);
    printf("digite o minuto de entrada:");
    scanf("%d", &minEntrada);
    printf("digite a hora de saída:");
    scanf("%d", &horaSaida);
    printf("digita o minuto de saída:");
    scanf("%d", &minSaida);

    calc(horaEntrada, horaSaida, totalHora, totalMin, minEntrada, minSaida);
}

void calc(int horaEntrada, int horaSaida, int totalHora, int totalMin, int minEntrada, int minSaida){
    
    int totalEntrada = horaEntrada * 60 + minEntrada;
    int totalSaida = horaSaida * 60 + minSaida;

    if(horaEntrada > horaSaida){
        totalHora = (1440 + totalSaida - totalEntrada) / 60;
        totalMin = (1440 + totalSaida - totalEntrada) % 60;
        printf("Horas: %d Minutos: %d", totalHora, totalMin);
    }
    else{
        totalHora = (totalSaida - totalEntrada) / 60;
        totalMin = (totalSaida - totalEntrada) % 60;
        printf("Horas: %d Minutos: %d", totalHora, totalMin);
    }
}