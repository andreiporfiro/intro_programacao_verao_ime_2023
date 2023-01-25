#include <stdio.h>

int main(){
	char caractere;
	
	scanf("%c", &caractere);
	
    (caractere >= '0' && caractere <= '9')?(printf("NUMERO")):
    (((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z'))?(printf("LETRA")):(printf("INVALIDO")));

	return 0;	
}