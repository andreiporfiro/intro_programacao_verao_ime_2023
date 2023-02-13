#include <stdio.h>

int somatorio(int i){
    if (i == 0){
        return 0;
    } else {
        return i*i + somatorio(i - 1);
    }
}

int main(){
    int num;

    scanf("%d", &num);

    printf("%d", somatorio(num));

    return 0;
}