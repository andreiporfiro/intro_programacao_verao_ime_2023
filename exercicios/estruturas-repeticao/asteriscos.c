#include <stdio.h>

int main(){
    int x, i, j, k;

    scanf("%d", &x);
    x = x / 2 + 1;

    if (x >= 1) {
        for (i = 1; i <= x; i++) {
            for (j = x - i; j > 0; j--) {
                printf(" ");
            }
            for (k = 1; k <= (2 * i - 1); k++) {
                printf("*");
            }
            printf("\n");
        }
        for (i = x - 1; i > 0; i--) {
            for (j = x - i; j > 0; j--) {
                printf(" ");
            }
            for (k = 1; k <= (2 * i - 1); k++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
