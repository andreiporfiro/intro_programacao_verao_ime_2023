#include <stdio.h>

void saqueBlemflarck(int valor){
    int notas50, notas10, notas5, notas1;

    notas50 = valor/50;
    notas10 = (valor%50)/10;
    notas5 = ((valor%50)%10)/5;
    notas1 = (((valor%50)%10)%5)/1;

    printf("%d\n%d\n%d\n%d", notas50, notas10, notas5, notas1);
}

int main(){
    int saque, resultado;

    scanf("%d", &saque);

    saqueBlemflarck(saque);

    return 0;
}