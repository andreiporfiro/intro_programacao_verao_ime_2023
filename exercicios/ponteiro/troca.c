#include <stdio.h>

void troca(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    troca(&a, &b);

    printf("%d\n%d", a, b);
}