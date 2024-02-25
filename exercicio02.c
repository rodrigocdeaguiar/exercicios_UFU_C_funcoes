/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1=0, num2=0;
	int* ptr1, ptr2;
	ptr1 = &num1;
	ptr2 = &num2;
	if(ptr1>ptr2){
		printf("Maior endereço de memória é de num1 = %p", ptr1);
	}else{
		printf("Maior endereço de memória é de num2 = %p", ptr2);
	}
	return 0;
}
