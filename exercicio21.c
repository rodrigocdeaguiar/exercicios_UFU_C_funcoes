/*Escreva um programa que declare um array de inteiros e um ponteiro para inteiros.
Associe o ponteiro ao array. Agora, some mais um (+1) a cada posição do array usando o ponteiro (use *).*/


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

int main() {
	setlocale(LC_ALL, "Portuguese");
	int tamanho, i;
	printf("\nDigite o número de elementos do array: ");
	scanf("%i", &tamanho);
	int array[tamanho];
	preencheArray(&array, tamanho);
	int* ptr;
	*ptr = &array;
	for(i=0;i<tamanho;i++){
        *ptr++;
		ptr++;
    }
    printf("\n___ELEMENTOS DO ARRAY APÓS A FUNÇÃO DE SOMA (+1)___");
    for (i=0;i<tamanho;i++) {
        printf("\n%i", array[i]);
    }
	return 0;
}
