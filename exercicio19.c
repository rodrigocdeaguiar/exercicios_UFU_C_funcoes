/*Escreva uma função que aceita como parâmetro um array de inteiros com N valores, e determina o maior elemento do array
e o número de vezes que este elemento ocorreu no array.
Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retornar para o programa
que a chamou o valor 15 e o número 3 (indicando que o nu´mero 15 ocorreu 3 vezes).
A função deve ser do tipo void.*/

#include <stdio.h>
#include <locale.h>


void preencheArray(int* array, int tamanhoArray){
	int i;
	for(i=0; i<tamanhoArray; i++){
		printf("\nDigite o valor inteiro %i de %i: ", (i+1), tamanhoArray);
		scanf("%d", &array[i]);
	}
}

void procuraElemento(int array[], int tamanhoArray){
	int maior;
	maior = array[0];
	int i;
    int contagem = 1;

    for (i=1;i<tamanhoArray;i++) {
        if (array[i] > maior) {
            maior = array[i];
            contagem = 1;
        } else if (array[i] == maior) {
            contagem++;
        }
    }
    printf("O maior elemento do array é: %d\n", maior);
    printf("Ele ocorre %d vezes no array.\n", contagem);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int tamanho;
	printf("Digite o número de elementos do array: ");
	scanf("%i", &tamanho);
	int array[tamanho];
	int i;
	preencheArray(&array, tamanho);
	procuraElemento(array, tamanho);
	return 0;
}
