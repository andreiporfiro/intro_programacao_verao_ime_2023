#include <stdio.h>

int main(){
    int n, i;
    float x;
    float resultado = 1;

    scanf("%d %f", &n, &x);

    for(i = 0; i < n; i++){
        resultado = resultado*x;
    }

    printf("%f", resultado);
    return 0;
}