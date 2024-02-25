/*Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereço de cada posição dessa matriz.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	float matriz[3][3], valores=0;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matriz[i][j] = valores;
			valores++;
		}
	}
	printf("\n___ENDEREÇO DAS POSIÇÕES DA MATRIZ___");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("\nmatriz[%i][%i] = %p", i, j, &matriz[i][j]);
		}
	}
	return 0;
}
