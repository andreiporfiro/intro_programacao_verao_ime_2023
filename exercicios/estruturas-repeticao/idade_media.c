#include <stdio.h>

int main(){
    int idade;
    float media, soma, cont;

    soma = cont = 0;

    do{
        scanf("%d", &idade);
        soma = soma + idade;
        cont++;
    } while(idade != 0);

    media = soma / (cont - 1);
    printf("%.2f", media);
    return 0;
}