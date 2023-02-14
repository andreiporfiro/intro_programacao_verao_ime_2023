#include <stdio.h>

int main(){
    int m, i, j;
    scanf("%d", &m);

    float x[m];
    int B[m];

    for(i = 0; i < m; i++){
        scanf("%f", &x[i]);
    }

    for(i = 0; i < m; i++){
        scanf("%d", &B[i]);
    }

    for(i = 0; i < m; i++){
        printf("%f\n", x[B[i]]);
    }
    return 0;
}