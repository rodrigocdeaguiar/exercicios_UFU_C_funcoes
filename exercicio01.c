/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char.
Associe as variáveis aos ponteiros (use &).
Modifique os valores de cada variável usando os ponteiros.
Imprima os valores das variáveis antes e após a modificação.*/

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
	printf("Digite um número inteiro: ");
	scanf("%i", &inteiro);
	fflush(stdin);
	printf("\nDigite um número real: ");
	scanf("%f", &real);
	fflush(stdin);
	printf("\nDigite um caractere: ");
    scanf("%c", &caractere);
    fflush(stdin);
	printf("\n%p, %p, %p", ptr1, ptr2, ptr3);
	printf("\nValores dos variáveis: inteiro = %i, real = %f, caractere = %c", inteiro, real, caractere);
	*ptr1 = 15;
	*ptr2 = 15.1;
	*ptr3 = 'Y';
	printf("\nValores alterados dos ponteiros: inteiro = %i, real = %f, caractere = %c", inteiro, real, caractere);
	return 0;
}	
