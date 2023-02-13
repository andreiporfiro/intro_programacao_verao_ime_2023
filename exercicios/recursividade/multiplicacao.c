#include <stdio.h>

int multiplicar(int x, int y){
    if (y == 0){
        return 0;
    } else {
        return x + multiplicar(x, y-1);
    }
}

int main(){
    int a, b;
    
    scanf("%d %d", &a, &b);

    printf("%d", multiplicar(a, b));

    return 0;
}