#include <stdio.h>

int main(){
	int ano;
	
	scanf("%d", &ano);
	
	if (ano % 4 == 0){
		if (ano % 100 != 0){
			printf("%d", 1);
		} else{
			if (ano % 400 == 0){
				printf("%d", 1);
			} else{
				printf("%d", 0);
			}
		}
	} else{
		printf("%d", 0);
	}
	
	return 0;
}