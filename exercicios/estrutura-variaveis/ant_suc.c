#include <stdio.h>

int main(){
	int num, ant, suc;
	
	scanf("%d", &num);
	
	ant = num - 1;
	suc = num + 1;
	
	printf("%d\n%d",ant,suc);

	return 0;
}