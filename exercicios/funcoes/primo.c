#include <stdio.h>

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

int main (){
    int num;
    
    scanf("%d", &num);
    
    printf("%d", primo(num));
    
    return 0;
}
