#include <stdio.h>

int main(){
    int num, i = 0, cont = 0, j, sequencia[30];

    do{
        scanf("%d", &num);
        if(num != 0){
            cont++;
            sequencia[i] = num;
            i++;
        } else{
            continue;
        }
    } while(num != 0);

    for(i = cont - 1; i >= 0; i--){
        printf("%d\n", sequencia[i]);
    }
    return 0;
}

