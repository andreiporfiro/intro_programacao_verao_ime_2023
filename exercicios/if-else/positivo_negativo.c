#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    if (num >= 0){
        printf("POSITIVO");
    } else{
        printf("NEGATIVO");
    }
    return 0;
}