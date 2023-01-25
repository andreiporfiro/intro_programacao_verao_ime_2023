#include <stdio.h>

int main(){
    char caractere;

    scanf("%c", &caractere);

    if (caractere >= 'A' && caractere <= 'Z'){
        printf("MAIUSCULA");
    } else{
        printf("MINUSCULA");
    }
    return 0;
}