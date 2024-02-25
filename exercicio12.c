/*Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e retorne eles ordenados,
ou seja, o menor valor na primeira variável, o segundo menor valor na variável do meio, e o maior valor na última variável.
A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes.
Exibir os valores ordenados na tela.*/

#include <stdio.h>
#include <locale.h>

int reordenaValores(int* a, int* b, int* c){
	int num1, num2, num3;
	if ((*a==*b)&&(*b==*c)){
		printf("\nValores iguais!!");
		return 1;
	}else if((*a>*b)&&(*b>*c)){
		num1 = *a;
		num2 = *b;
		num3 = *c;
		*a = num3;
		*b = num2;
		*c = num1;
		printf("\nValores em ordem crescente: num1 = %i, num2 = %i, num3 = %i", *a, *b, *c);
		return 0;
	}else if((*a>*c)&&(*c>*b)){
		num1 = *b;
		num2 = *c;
		num3 = *a;
		*a = num1;
		*b = num2;
		*c = num3;
		printf("\nValores em ordem crescente: num1 = %i, num2 = %i, num3 = %i", *a, *b, *c);
		return 0;
	}
	else if((*b>*a)&&(*a>*c)){
		num1 = *c;
		num2 = *a;
		num3 = *b;
		*a = num1;
		*b = num2;
		*c = num3;
		printf("\nValores em ordem crescente: num1 = %i, num2 = %i, num3 = %i", *a, *b, *c);
		return 0;
	}else if((*b>*c)&&(*c>*a)){
		num1 = *a;
		num2 = *c;
		num3 = *b;
		*a = num1;
		*b = num2;
		*c = num3;
		printf("\nValores em ordem crescente: num1 = %i, num2 = %i, num3 = %i", *a, *b, *c);
		return 0;
	}else if((*c>*b)&&(*b>*a)){
		num1 = *a;
		num2 = *b;
		num3 = *c;
		*a = num1;
		*b = num2;
		*c = num3;
		printf("\nValores em ordem crescente: num1 = %i, num2 = %i, num3 = %i", *a, *b, *c);
		return 0;
	}else if((*c>*a)&&(*a>*b)){
		num1 = *a;
		num2 = *b;
		num3 = *c;
		*b = num1;
		*a = num2;
		*c = num3;
		printf("\nValores em ordem crescente: num1 = %i, num2 = %i, num3 = %i", *a, *b, *c);
		return 0;
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3, retorno;
	c
	fflush(stdin);
	printf("Digite o valor de num2: ");
	scanf("%i", &num2);
	fflush(stdin);
	printf("Digite o valor de num3: ");
	scanf("%i", &num3);
	fflush(stdin);
	retorno = reordenaValores(&num1, &num2, &num3);
	return 0;
}
