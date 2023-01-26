#include <stdio.h>

int main(){
	float A1, A2, A3, media;
	
	scanf("%f %f %f", &A1, &A2, &A3);
	
	media = (A1+A2+A3)/3;
	
	printf("%.2f", media);
	
	return 0;
}