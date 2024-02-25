/*Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2  valores  de  entrada  e  retorne  o  maior  valor
na  primeira  variável  e  o  menor  valor  na segunda variável. Escreva o conteúdo das 2 variáveis na tela.*/

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
	printf("\nApós a função de análise: a = %i, b = %i", a, b);
	return 0;
}
