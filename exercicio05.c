/*Fa�a um programa que leia dois valores inteiros e chame uma fun��o que receba estes 2  valores  de  entrada  e  retorne  o  maior  valor
na  primeira  vari�vel  e  o  menor  valor  na segunda vari�vel. Escreva o conte�do das 2 vari�veis na tela.*/

#include <stdio.h>
#include <locale.h>

void lerValores(int *a, int *b) {
    printf("\nDigite o primeiro valor inteiro: ");
    scanf("%d", a);
    printf("\nDigite o segundo valor inteiro: ");
    scanf("%d", b);
}

void analisaMaiorVariavel(int* a, int* b){
	int temp;
	if(*b>*a){
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	lerValores(&a, &b);
	printf("\nValores de entrada: a = %i, b = %i", a, b);
	analisaMaiorVariavel(&a, &b);
	printf("\nAp�s a fun��o de an�lise: a = %i, b = %i", a, b);
	return 0;
}
