#include <stdio.h>

int main(){
	int num, cen, dez, uni;
	
	scanf("%d", &num);
	
	cen = num / 100;
	dez = (num / 10) % 10;	
	uni = num % 10;
	
	printf("%d\n%d\n%d", cen, dez, uni);
	
	return 0;
}