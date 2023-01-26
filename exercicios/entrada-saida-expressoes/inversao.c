#include <stdio.h>

int main(){
	int num, cen, dez, uni, inv;
	
	scanf("%d", &num);
	
	cen = num / 100;
	dez = (num / 10) % 10;	
	uni = num % 10;
	
	inv = uni*100 + dez*10 + cen*1;
	
	printf("%d", inv);
	
	return 0;
}