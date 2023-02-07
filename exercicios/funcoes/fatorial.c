#include <stdio.h>

int fat(int n){
    int i;
    int resultado = 1;
    
    if (n < 0){
        return -1;
    } else {
        for(i = 1; i <= n; i++){
            resultado = i*resultado;
        }
    }
    return resultado;
}

int main(){
    int num;
    
    scanf("%d", &num);
    
    printf("%d", fat(num));
    
    return 0;
}