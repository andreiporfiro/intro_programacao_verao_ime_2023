#include <stdio.h>

int gincana(int hinicial, int hfinal){
    if (hfinal - hinicial > 0){
        return hfinal - hinicial;
    } else { 
        if (hfinal - hinicial == 0){
            return 24;
        } else {
            return (24 - hinicial) + hfinal;
        }
    }
}

int main(){
    int inicio, fim;

    scanf("%d %d", &inicio, &fim);

    printf("%d", gincana(inicio, fim));
    
    return 0;
}