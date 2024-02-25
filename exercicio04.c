/*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas
2 variáveis e troque o seu conteúdo, ou seja, esta função ´e chamada passando duas
variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B
terá o valor de A.*/

#include <stdio.h>
#include <locale.h>

void trocaValor(int* num1, int* num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	printf("Digite o valor de num1: ");
	scanf("%i", &num1);
	fflush(stdin);
	printf("Digite o valor de num2: ");
	scanf("%i", &num2);
	fflush(stdin);
	printf("\nAntes da modificação: num1 = %i, num2 = %i", num1, num2);
	trocaValor(&num1, &num2);
	printf("\nDepois da modificação: num1 = %i, num2 = %i", num1, num2);
	return 0;
}
