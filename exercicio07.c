/*Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B.
A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A.
Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro.
Imprima os valores de A e B na função principal*/

#include <stdio.h>
#include <locale.h>

void lerValores(int *a, int *b){
    printf("\nDigite o primeiro valor inteiro: ");
    scanf("%d", a);
    fflush(stdin);
    printf("\nDigite o segundo valor inteiro: ");
    scanf("%d", b);
    fflush(stdin);
}

void somaDoisNumeros(int *a, int b){
	*a = *a + b;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	lerValores(&a, &b);
	somaDoisNumeros(&a, b);
	printf("\nDepois de aplicar a função: a = %i, b = %i", a, b);
	return 0;
}
