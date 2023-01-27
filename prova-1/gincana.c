#include <stdio.h>

int main(){
    int inicio, fim;

    scanf("%d %d", &inicio, &fim);

    if (fim - inicio > 0){
        printf("%d", fim - inicio);
    } else {
        if (fim - inicio == 0){
            printf("%d", 24);
        } else {
            printf("%d", (24 - inicio) + fim);
        }
    }
    return 0;
}