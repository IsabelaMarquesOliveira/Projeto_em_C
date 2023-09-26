#include<stdio.h>

main(){
	char opcao;
	printf("Digite i ou r:");
	scanf("%c", &opcao);
	
	switch(opcao){
		case 'i':
			printf("Você escolheu a letra i"); 
			break;
		case 'r':
			printf("\nVocê escolheu a letra r");
			break;
		default:
			printf("\nVocê escolheu uma letra que não eh permitido"); 
    }
}
