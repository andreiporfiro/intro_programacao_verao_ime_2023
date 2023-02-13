#include <stdio.h>

int somatorio(int i){
    if (i == 0){
        return 0;
    } else {
        return (2*i*i + 2*i + 8) + somatorio(i - 1);
    }
}

int main(){
    int num;

    scanf("%d", &num);

    printf("%d", somatorio(num));

    return 0;
}