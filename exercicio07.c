/*Crie um programa que contenha uma fun��o que permita passar por par�metro dois n�meros inteiros A e B.
A fun��o dever� calcular a soma entre estes dois n�meros e armazenar o resultado na vari�vel A.
Esta fun��o n�o dever� possuir retorno, mas dever� modificar o valor do primeiro par�metro.
Imprima os valores de A e B na fun��o principal*/

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
	printf("\nDepois de aplicar a fun��o: a = %i, b = %i", a, b);
	return 0;
}
