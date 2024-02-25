/*Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba estas
2 vari�veis e troque o seu conte�do, ou seja, esta fun��o �e chamada passando duas
vari�veis A e B por exemplo e, ap�s a execu��o da fun��o, A conter� o valor de B e B
ter� o valor de A.*/

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
	printf("\nAntes da modifica��o: num1 = %i, num2 = %i", num1, num2);
	trocaValor(&num1, &num2);
	printf("\nDepois da modifica��o: num1 = %i, num2 = %i", num1, num2);
	return 0;
}
