/*Crie um programa que contenha um array contendo 5 elementos inteiros.
Leia esse array do teclado e imprima o endere�o das posi��es contendo valores pares.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[5] = {1, 2, 3, 4, 5}, i;
	printf("\n___ENDERE�OS DE MEM�RIA PARES DENTRO DA MATRIZ____");
	for(i=0; i<5; i++){
		if(matriz[i]%2==0){
			printf("\nmatriz[%i] = %p", i, &matriz[i]);
		}
	}	
}
