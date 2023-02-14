#include <stdio.h>

int main(){
    int i, n;
    float soma = 0;

    printf("Digite a quantidade de notas para calcular a media: ");
    scanf("%d", &n);

    float notas[n];

    for(i = 0; i < n; i++){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    for(i = 0; i < n; i++){
        printf("Nota %d = %.2f\n", i+1, notas[i]);
    }

    printf("Media = %.2f", soma / n);

    return 0;
}