#include <stdio.h>

int main(){
	int a, b, temp;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	temp = b;
	b = a;
	a = temp;
	
	printf("%d\n",a);
	printf("%d",b);

	return 0;
}