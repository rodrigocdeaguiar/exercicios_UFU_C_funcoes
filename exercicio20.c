/*Implemente uma função que receba como parâmetro um array de números reais de 
tamanho N e retorne quantos números negativos há nesse array.
Essa função deve obedecer ao protótipo: 
 

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
	printf("Digite o número de elementos do array: ");
	scanf("%i", &tamanho);
	int array[tamanho];
	preencheArray(&array, tamanho);
	printf("\nNúmero de elementos negativos no Array: %i", elementosNegativos(array, tamanho));
	return 0;
}
