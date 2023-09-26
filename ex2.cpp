#include<stdio.h>

main(){
	char cliente;
	float valorcompra, desconto, valortotal;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &valorcompra);
	
	printf("Digite o codigo do cliente: (1)Comum, (2)Funcionario, (3)Vip : ");
	scanf("%d", &cliente);
	
	
switch(cliente){
	case 1:
		desconto = 0.03;
		break;
	case 2:
		desconto = 0.10;
		break;
	case 3:
		desconto = 0.07;
		break;
	default: 
		printf("Codigo de cliente invalido!\n");
	
	}
	valortotal = valorcompra - (valorcompra * desconto);
	printf("Valor total da compra com desconto: R$%.2f\n",valortotal);
}
