#include <stdio.h>

int somadobro(int a, int b){
    return 2*a + 2*b;
}

int main(){
    int x, y;
    
    scanf("%d %d", &x, &y);
    
    printf("%d", somadobro(x, y));
    
    return 0;
}