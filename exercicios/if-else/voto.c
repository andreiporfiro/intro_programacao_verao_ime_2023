#include <stdio.h>

int main(){
    int idade;

    scanf("%d", &idade);

    if (idade >= 18 && idade <= 70){
        printf("%d", 1);
    } else{
        printf("%d", 0);
    }
    return 0;
}