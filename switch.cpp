#include<stdio.h>

main(){
	char opcao;
	printf("Digite i ou r:");
	scanf("%c", &opcao);
	
	switch(opcao){
		case 'i':
			printf("Voc� escolheu a letra i"); 
			break;
		case 'r':
			printf("\nVoc� escolheu a letra r");
			break;
		default:
			printf("\nVoc� escolheu uma letra que n�o eh permitido"); 
    }
}
