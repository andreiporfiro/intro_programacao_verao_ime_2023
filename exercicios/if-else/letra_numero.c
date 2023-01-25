#include <stdio.h>

int main(){
	char caractere;
	
	scanf("%c", &caractere);
	
	if (caractere >= '0' && caractere <= '9'){
		printf("NUMERO");
	} else {
		if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z')){
			printf("LETRA");
		}
	}
	return 0;	
}