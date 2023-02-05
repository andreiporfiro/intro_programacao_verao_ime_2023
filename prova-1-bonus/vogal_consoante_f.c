#include <stdio.h>

int vogalOuConsoante(char);

int main(){
	char letra, resposta;
	
	scanf("%c", &letra);

	resposta = vogalOuConsoante(letra);
	
	if (resposta == 1){
		printf("VOGAL");
	} else {
		printf("CONSOANTE");
	}
	return 0;	
}

int vogalOuConsoante(char caractere){
	return (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' || 
    caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U');
}