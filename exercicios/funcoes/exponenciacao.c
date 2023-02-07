#include <stdio.h>

int exponenciacao(int base, int expoente){
	int cont = 0;
	int resultado = 1;
	while(cont != expoente){
		resultado = resultado * base;
		cont += 1;
	}
	return resultado;
}

int main(){
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d", exponenciacao(x, y));

    return 0;
}
