#include <stdio.h>

int main(){
	int num, cen, dez, uni;
	
	scanf("%d", &num);
	
	cen = num / 100;
	dez = (num / 10) % 10;	
	uni = num % 10;

    switch(dez){
        case 0:
        case 5:
            printf("%d", cen + uni);
            break;
        case 1:
        case 6:
            printf("%d", cen - uni);
            break;
        case 2:
        case 7:
            printf("%d", cen * uni);
            break;
        case 3:
        case 8:
            printf("%d", cen / uni);
            break;
        case 4:
        case 9:
            printf("%d", cen % uni);
            break;
    }	
	return 0;
}