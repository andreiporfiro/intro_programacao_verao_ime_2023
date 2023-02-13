#include <stdio.h>

int main (){
    int num, soma;
    soma = 0;

    scanf("%d", &num);
    
    while(num > 0){
        soma = soma + num % 10;
        num = num /10;
    }

printf("%d", soma);
return 0;
}