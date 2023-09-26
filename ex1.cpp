#include <stdio.h>

main() {
	char operacao;
	float numero1,numero2,resultado;
	
	printf("Escolha a operacao (+, -, *, /): ");
	scanf("%c", &operacao);
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &numero2);
	
	switch(operacao) {
		case '+':
		resultado = numero1 + numero2;
		printf("Resultado: %.2f\n",resultado);
		break;
		
		case '-':
		resultado = numero1 - numero2;
		printf("Resultado: %.2f\n",resultado);
		break;
		
		case '*':
		resultado = numero1 * numero2;
		printf("Resultado: %.2f\n",resultado);
		break;
		
		case '/':
		resultado = numero1 / numero2;
		printf("Resultado: %.2lf\n",resultado);
		break;
		
		}
	
}
