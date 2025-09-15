
#include<stdio.h>

// Operacoes em C

int main(void) {
    printf("Digite dois numeros inteiros, e você saberá a relação entre eles:\n");
    
    int number1 = 0;

    int number2 = 0;

    scanf("%d %d", &number1, &number2);
    
    if (number1 == number2) {
    
    printf("%d é igual a %d\n", number1, number2);
    
    }

    if (number1 != number2) {

    printf("%d é diferente de %d\n", number1, number2);
    
    }

    if (number1 < number2) {

    printf("%d é menor que %d\n", number1, number2);
    
    }

    if (number1 > number2) {

    printf("%d é maior que %d\n", number1, number2);
    
    }

    if (number1 <= number2) {
    
    printf("%d é menor ou igual a %d\n", number1, number2);
    
    }
    
    if (number1 >= number2) {
    
    printf("%d é maior ou igual a %d\n", number1, number2);
    
    }

}