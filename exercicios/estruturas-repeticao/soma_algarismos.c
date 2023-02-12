#include <stdio.h>
int main (){
int soma = 0;
int numero = 343438;


while(numero > 0){
    soma = soma + numero % 10;
    numero = (numero /10);
}

printf("%d", soma);
}