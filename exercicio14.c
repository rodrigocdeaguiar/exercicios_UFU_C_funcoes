/*Crie uma fun��o que receba dois par�metros: um array e um valor do mesmo tipo do
array. A fun��o dever� preencher os elementos de array com esse valor. N� utilize
�ndices para percorrer o array, apenas aritm�tica de ponteiros.*/

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
	printf("Digite um n�mero inteiro: ");
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

