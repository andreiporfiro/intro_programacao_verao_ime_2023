#include <stdio.h>

void multiplos(int, int);

int main(){
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    multiplos(a, b);
    
    return 0;
}

void multiplos(int x, int y){
    int i;
    
    for(i = 1; i <= x; i++){
        printf("%d\n", i*y);
    }
}