#include <stdio.h>

int main(){
    int i, n;
    float total = 0, media = 0;

    printf("Digite a quantidade de itens: ");
    scanf("%d", &n);

    float precos[n];
    int qtde[n];

    for(i = 0; i < n; i++){
        printf("Digite o preco do item %d: ", i+1);
        scanf("%f", &precos[i]);
        media = media + precos[i];
    }

    for(i = 0; i < n; i++){
        printf("Digite a quantidade comprada do item %d: ", i+1);
        scanf("%d", &qtde[i]);
        total = total + qtde[i]*precos[i];
    }

    printf("Total da compra = %.2f\n", total);
    printf("Media dos precos = %.2f", media / n);

    return 0;
}