#include <stdio.h>

int main(){
    int num1, num2, N, decrescente;
    num2 = N = decrescente = 0;

    do{
        scanf("%d", &num1);

        if(num1 != 0){
            N++;
        } else {
            break;
        }

        if(num1 >= num2){
            num2 = num1;
        } else {
            decrescente++;
            num2 = num1;
        }
    } while(num1 != 0);

    if(decrescente != 0){
        printf("nao %d", N);
    } else {
        printf("sim %d", N);
    }
    return 0;
}