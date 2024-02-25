/*Escreva uma função que retorna o maior valor de um array de tamanho N. Escreva um programa que leia N valores inteiros,
imprima o array com k elementos por linha, e o maior elemento. O valor de k também deve ser fornecido pelo usuário.*/

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

void procuraMaiorElemento(int* array, int tamanhoArray){
	int i=0, maiorElemento = *(array+i);
	for(i=0; i<tamanhoArray; i++){
		if(*(array+i)>maiorElemento){
			maiorElemento = *(array+i);
		}
	}
	printf("\nMaior elemento do array: %i", maiorElemento);
}

void printaArrayLinhas(int* array, int tamanhoArray, int elementosLinha){
	int i, k;
	int cont = 0;
	printf("\n___ELEMENTOS DO ARRAY___\n");
	for(i=0; i<tamanhoArray; i++){
		if(cont<elementosLinha){
			printf("%i ", *(array+i));
			cont++;
		}else{
			cont = 0;
			printf("\n%i ", *(array+i));
			cont++;
		}
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tamanhoArray, elementosLinha, i=0;
	do{
		printf("\nDigite o número de elementos do array: ");
		scanf("%i", &tamanhoArray);
		printf("\nDigite o número de elementos por linha: ");
		scanf("%i", &elementosLinha);
		system("cls");
	}while(tamanhoArray%elementosLinha!=0);
	int arrayInteiros[tamanhoArray];
	preencheArray(&arrayInteiros, tamanhoArray);
	procuraMaiorElemento(&arrayInteiros, tamanhoArray);
	printaArrayLinhas(&arrayInteiros, tamanhoArray, elementosLinha);
	return 0;
}
