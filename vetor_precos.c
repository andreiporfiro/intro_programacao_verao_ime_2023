#include <stdio.h>

int main(){
	int i, n;
	n = 5;
	int quantidade[n];
	float preco[n], total, media;
	total = media = 0;
	
	for(i = 0; i < n; i++){
		printf("Digite o preço do item %d: ", i+1);
		scanf("%f", &preco[i]);
        media = media + preco[i];
	}
	
	for(i = 0; i < n; i++){
		printf("Digite a quantidade do item %d: ", i+1);
		scanf("%d", &quantidade[i]);
        total = total + quantidade[i]*preco[i];
	}
	
	media = media / n;
	
	printf("O total da compra e %.2f\n", total);
	printf("A medida dos precos unitarios e %.2f\n", media);
	return 0;
}