#include <stdio.h>

void diaSemanaJaneiro(int);

int main(){
    int dia;

    scanf("%d", &dia);

    diaSemanaJaneiro(dia);

    return 0;
}

void diaSemanaJaneiro(int x){
    int indice;

    if (x > 31 || x == 0){
        printf("Invalido");
    } else {
        if (x % 7 == 0){
            printf("Sabado");
        } else {
            indice = x % 7;
        }
    }
    
    switch(indice){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Terca-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sabado");
            break;
    }
}