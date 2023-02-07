#include <stdio.h>

int fibonacci(int);

int main(){
    int num;
    
    do{
        scanf("%d", &num);
    } while(num <= 0 || num > 40);
    printf("%d", fibonacci(num));
    return 0;
}

int fibonacci(int n){
    int i, f1, f2, soma;
    f1 = f2 = soma = 1;
    
    for(i = 3; i <= n; i++){
        soma = f1 + f2;
        f1 = f2;
        f2 = soma;
    }
    return soma;
}