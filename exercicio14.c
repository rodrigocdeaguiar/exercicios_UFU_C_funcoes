/*Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do
array. A função deverá preencher os elementos de array com esse valor. Nã utilize
índices para percorrer o array, apenas aritmética de ponteiros.*/

#include <stdio.h>
#include <locale.h>
#define TAM 30

void preencheArray(int num, int* array[]){
	int i;
	int* final = &array + TAM;
	int* ptr = &array;
	
	for (*ptr; ptr < final; ptr++) {
        *ptr = num;
    }
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[TAM], num, i;
	printf("Digite um número inteiro: ");
	scanf("%i", &num);
	fflush(stdin);
	preencheArray(num, &numeros);
	printf("Array preenchido com o valor: \n");
    for (i=0; i<TAM;i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");
	return 0;
}

