/*Elaborar um programa que leia dois valores inteiros (A e B).
Em seguida fa�a uma fun��o que retorne a soma do dobro dos dois n�meros lidos.
A fun��o dever� armazenar o dobro de A na pr�pria vari�vel A e o dobro de B na pr�pria vari�vel B.*/

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

void somaDobro(int *a, int *b){
	*a = *a + (*a*2);
	*b = *b + (*b*2);
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	lerValores(&a, &b);
	somaDobro(&a, &b);
	printf("\nDepois de aplicar a fun��o: a = %i, b = %i", a, b);
	return 0;
}
