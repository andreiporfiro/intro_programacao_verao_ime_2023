#include <stdio.h>

int main(){
    int codigo, quantidade;

    scanf("%d %d", &codigo, &quantidade);

    switch(codigo){
        case 1:
            printf("%.2f", 8.50*quantidade);
            break;
        case 2:
            printf("%.2f", 9.00*quantidade);
            break;
        case 3:
            printf("%.2f", 7.50*quantidade);
            break;
        case 4:
            printf("%.2f", 11.00*quantidade);
            break;
        case 5:
            printf("%.2f", 8.30*quantidade);
            break;
        default:
            printf("Invalido");
    }
    return 0;
}