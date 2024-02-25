/*Crie uma função que receba como parâmetro um array e o imprima.
Não utilize índices para percorrer o array, apenas aritmética de ponteiros.*/

#include <stdio.h>
#include <locale.h>
#define TAM 5

void imprimeArray(int array){
	int i;
	int *ptr = array;
	printf("\n__IMPRIMINDO ARRAY POR ARITMÉTICA DE PONTEIROS___");
	for(i=0; i<TAM;i++){
		printf("\n\t%d", *ptr);
		ptr++;
	}
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int array[TAM] = {1,2,3,4,5};
	imprimeArray(array);
	return 0;
}
