#include <stdio.h>

int primo(int);

int main (){
    int num, res, i, n;

    do{
        scanf("%d", &n);
    } while(n < 1 || n > 50);
    
    for(i = 0; i < n; i++){
        scanf("%d", &num);
        res = primo(num);
        if (res == 1){
            printf("PRIMO\n");
        } else {
            printf("NAO PRIMO\n");
        }
    }
    return 0;
}

int primo (int n){
    int i;
    if (n <= 1){
        return 0;
    } else {
        for (i = 2; i < n; i++){
            if(n % i == 0){
                return 0;
            }
        }
    }
    return 1;
}

