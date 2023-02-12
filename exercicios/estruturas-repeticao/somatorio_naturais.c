#include <stdio.h>

int main(){
    int total, soma, i;
    soma = 0;
    i = 1;
    
    scanf("%d", &total);

    while(soma <= total){
        soma = soma + i;
        i++;
    }
    printf("%d", soma - (i-1));
}