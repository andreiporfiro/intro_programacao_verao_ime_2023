#include <stdio.h>

char caixaAlta(char x){
    if (x >= 'a' && x <= 'z'){
        return x - 32;
    } else {
        if (x >= 'A' && x <= 'Z'){
            return x;
        }
    }
}

int main(){
    char letra1, letra2, letra3, letra4, letra5, letra6, letra7, letra8, letra9, letra10;

    scanf("%c %c %c %c %c %c %c %c %c %c", &letra1, &letra2, &letra3, &letra4, &letra5, &letra6, &letra7, &letra8, &letra9, &letra10);
    
    printf("%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c\n%c", caixaAlta(letra1), caixaAlta(letra2), caixaAlta(letra3), caixaAlta(letra4), caixaAlta(letra5), caixaAlta(letra6), caixaAlta(letra7), caixaAlta(letra8), caixaAlta(letra9), caixaAlta(letra10));

    return 0;
}