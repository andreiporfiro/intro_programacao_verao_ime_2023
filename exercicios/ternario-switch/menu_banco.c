int main(){
	int opcao, extrato;
	float saque, transfer, saldo;
	
	printf("BANCO MM\n1 - Ver o saldo\n2 - Fazer um saque\n3 - Fazer uma transferencia\n4 - Imprimir o extrato\nEscolha sua opcao:\n");
	scanf("%d", &opcao);
	
	saldo = 234.56;
	
	switch(opcao){
		case 1:
			printf("Seu saldo e de R$ %.2f", saldo);
			break;
		case 2:
			printf("Digite o valor a ser sacado: ");
			scanf("%f", &saque);
			printf("Retire os R$ %.2f no local indicado", saque);
			break;
		case 3:
			printf("Digite o valor a ser transferido: ");
			scanf("%f", &transfer);
			printf("O valor de R$ %.2f foi transferido com sucesso", transfer);
			break;
		case 4:
			printf("Indique o mes para emitir o extrato: ");
			scanf("%d", &extrato);
			printf("Retire o extrato do mes %d no local indicado", extrato);
			break;
		default:
			printf("Opcao invalida");
	}
	return 0;
}