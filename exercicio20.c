/*Implemente uma fun��o que receba como par�metro um array de n�meros reais de 
tamanho N e retorne quantos n�meros negativos h� nesse array.
Essa fun��o deve obedecer ao prot�tipo: 
 

int negativos(float *vet, int N);

*/

#include <stdio.h>
#include <locale.h>

void preencheArray(int* array, int tamanhoArray){
	int i;
	for(i=0; i<tamanhoArray; i++){
		printf("\nDigite o valor inteiro %i de %i: ", (i+1), tamanhoArray);
		scanf("%d", &array[i]);
	}
}

int elementosNegativos(int array[], int tamanhoArray){
	int negativos = 0;
	int i;
    for (i=1;i<tamanhoArray;i++) {
        if(array[i]<0){
        	negativos++;
        }
    }
    return negativos;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int tamanho;
	printf("Digite o n�mero de elementos do array: ");
	scanf("%i", &tamanho);
	int array[tamanho];
	preencheArray(&array, tamanho);
	printf("\nN�mero de elementos negativos no Array: %i", elementosNegativos(array, tamanho));
	return 0;
}
