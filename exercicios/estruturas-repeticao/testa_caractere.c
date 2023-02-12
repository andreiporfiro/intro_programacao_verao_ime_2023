#include <stdio.h>

int main(){
    char caractere;
    
    while(caractere != '0'){
        scanf(" %c", &caractere);
        
        if(caractere >= 'a' && caractere <= 'z'){
            printf("%d\n", 1);
        } else {
            if(caractere >= 'A' && caractere <= 'Z'){
                printf("%d\n", 2);
            } else {
                if(caractere == '0'){
                    break;
                } else {
                    printf("%d\n", -1);
                }
            }
        }
    }    
    return 0;
}