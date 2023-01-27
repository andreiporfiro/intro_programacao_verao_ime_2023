#include <stdio.h>

int main(){
    int dia, indice;

    scanf("%d", &dia);
    
    if (dia > 31 || dia == 0){
        printf("Invalido");
    } else {
        if (dia % 7 == 0){
            printf("Sabado");
        } else {
            indice = dia % 7;
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
    return 0;
}