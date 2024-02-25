/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char.
Associe as vari�veis aos ponteiros (use &).
Modifique os valores de cada vari�vel usando os ponteiros.
Imprima os valores das vari�veis antes e ap�s a modifica��o.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int inteiro;
	float real;
	char caractere;
	int* ptr1;
	float* ptr2;
	char* ptr3;
	ptr1 = &inteiro;
	ptr2 = &real;
	ptr3 = &caractere;
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &inteiro);
	fflush(stdin);
	printf("\nDigite um n�mero real: ");
	scanf("%f", &real);
	fflush(stdin);
	printf("\nDigite um caractere: ");
    scanf("%c", &caractere);
    fflush(stdin);
	printf("\n%p, %p, %p", ptr1, ptr2, ptr3);
	printf("\nValores dos vari�veis: inteiro = %i, real = %f, caractere = %c", inteiro, real, caractere);
	*ptr1 = 15;
	*ptr2 = 15.1;
	*ptr3 = 'Y';
	printf("\nValores alterados dos ponteiros: inteiro = %i, real = %f, caractere = %c", inteiro, real, caractere);
	return 0;
}	
