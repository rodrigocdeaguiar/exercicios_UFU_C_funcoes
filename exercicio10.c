/*Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[5], i;
	int* ptr;
	ptr = &matriz;
	for(i=0; i<5; i++){
		printf("Digite o valor %i da matriz: ", i+1);
		scanf("%i", ptr+i);
	}
	printf("\n___DOBRO DOS ELEMENTOS DIGITADOS____");
	for(i=0; i<5; i++){
		printf("\nmatriz[%i]: %i", i, *(ptr+i)*2);
	}
}
