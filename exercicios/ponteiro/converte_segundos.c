#include <stdio.h>

void converte_hora(int total_segundos, int *hora, int *min, int *seg){
    *hora = total_segundos / 3600;
    *min = (total_segundos % 3600) / 60;
    *seg = (total_segundos % 3600) % 60;
}

int main(){
    int n, h, m, s;

    scanf("%d", &n);
    
    if(n >= 0){
        converte_hora(n, &h, &m, &s);
    }

    printf("%02d:%02d:%02d", h, m, s);

    return 0;
}

