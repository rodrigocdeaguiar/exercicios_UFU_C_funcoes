/*Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis inteiras,
min e max, e armazene nessas variáveis o valor mínimo e máximo do array.
Escreva também uma função main que use essa função.*/

#include <stdio.h>
#include <locale.h>

void preencheArray(int* array, int tamanhoArray){
	int i;
	for(i=0; i<tamanhoArray; i++){
		printf("\nDigite o valor inteiro %i de %i: ", (i+1), tamanhoArray);
		scanf("%d", &array[i]);
		fflush(stdin);
	}
}

int procuraMaiorElemento(int* array, int tamanhoArray){
	int i=0, maiorElemento = *(array+i);
	for(i=0; i<tamanhoArray; i++){
		if(*(array+i)>maiorElemento){
			maiorElemento = *(array+i);
		}
	}
	return maiorElemento;
}

int procuraMenorElemento(int* array, int tamanhoArray){
	int i=0, menorElemento = *(array+i);
	for(i=0; i<tamanhoArray; i++){
		if(*(array+i)<menorElemento){
			menorElemento = *(array+i);
		}
	}
	return menorElemento;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tamanhoArray, min, max;
	do{
		printf("\nDigite o número de elementos do array: ");
		scanf("%i", &tamanhoArray);
		system("cls");
	}while(tamanhoArray<=0);
	int arrayInteiros[tamanhoArray];
	preencheArray(&arrayInteiros, tamanhoArray);
	max = procuraMaiorElemento(&arrayInteiros, tamanhoArray);
	min = procuraMenorElemento(&arrayInteiros, tamanhoArray);
	printf("\nMaior elemento do array = %i", max);
	printf("\nMenor elemento do array = %i", min);
	return 0;
}
