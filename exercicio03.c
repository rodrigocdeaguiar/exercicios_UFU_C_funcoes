/*Escreva um programa que contenha duas vari�veis inteiras.
Leia essas vari�veis do teclado. Em seguida, compare seus endere�os e exiba o conte�do do maior endere�o.*/

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
		printf("Maior endere�o de mem�ria � de num1 = %p", ptr1);
	}else{
		printf("Maior endere�o de mem�ria � de num2 = %p", ptr2);
	}
	return 0;
}
