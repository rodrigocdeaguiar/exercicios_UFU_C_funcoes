/*Crie um programa que contenha um array de float contendo 10 elementos.
Imprima o endere�o de cada posi��o desse array.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float sequencia[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	float* ptr;
	ptr = &sequencia;
	printf("\nEndere�o de mem�ria de cada valor do vetor: ");
	for(i=0; i<10; i++){
		printf("\nFloat[%i] = %p", i, (ptr+i));
	}
	return 0;
}
