#include <stdio.h>

int main(){
    int ddd;

    scanf("%d", &ddd);

    switch(ddd){
        case 61:
            printf("Brasilia");
            break;
        case 71:
            printf("Salvador");
            break;
        case 11:
            printf("Sao Paulo");
            break;
        case 21:
            printf("Rio de Janeiro");
            break;
        case 19:
            printf("Campinas");
            break;
        case 31:
            printf("Belo Horizonte");
            break;
        case 62:
            printf("Goiania");
            break;
        default:
            printf("Invalido");
    }
    return 0;
}