#include <stdio.h>

int main(){
    int saque, notas50, notas10, notas5, notas1;

    scanf("%d", &saque);

    notas50 = saque/50;
    notas10 = (saque%50)/10;
    notas5 = ((saque%50)%10)/5;
    notas1 = (((saque%50)%10)%5)/1;

    printf("%d\n%d\n%d\n%d", notas50, notas10, notas5, notas1);

    return 0;
}