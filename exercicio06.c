/*Elaborar um programa que leia dois valores inteiros (A e B).
Em seguida faça uma função que retorne a soma do dobro dos dois números lidos.
A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B.*/

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
	printf("\nDepois de aplicar a função: a = %i, b = %i", a, b);
	return 0;
}
