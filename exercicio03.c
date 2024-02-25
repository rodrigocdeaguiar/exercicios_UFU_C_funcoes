/*Escreva um programa que contenha duas variáveis inteiras.
Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1=0, num2=0;
	int* ptr1, ptr2;
	ptr1 = &num1;
	ptr2 = &num2;
	printf("Digite o valor de num1: ");
	scanf("%i", &num1);
	fflush(stdin);
	printf("Digite o valor de num2: ");
	scanf("%i", &num2);
	fflush(stdin);
	if(ptr1>ptr2){
		printf("Maior endereço de memória é de num1 = %p", ptr1);
	}else{
		printf("Maior endereço de memória é de num2 = %p", ptr2);
	}
	return 0;
}
