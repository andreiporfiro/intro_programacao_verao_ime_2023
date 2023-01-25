int main(){
	int num1, num2, num3;
	
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if (num1 > num2){
		if (num1 > num3){
			if (num2 > num3){
				printf("%d\n%d\n%d", num3, num2, num1);
			} else {
				printf("%d\n%d\n%d", num2, num3, num1);
			}
		} else {
			printf("%d\n%d\n%d", num2, num1, num3);
		}
	} else {
		if (num2 > num3){
			if (num1 > num3){
				printf("%d\n%d\n%d", num3, num1, num2);
			} else {
				printf("%d\n%d\n%d", num1, num3, num2);
			}
		} else {
			printf("%d\n%d\n%d", num1, num2, num3);
		}
	}
	return 0;
}