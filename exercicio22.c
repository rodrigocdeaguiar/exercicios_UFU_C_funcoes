/*Crie uma fun��o para somar dois arrays. Esta fun��o deve receber dois arrays e retornar a soma em um terceiro array.
Caso o tamanho do primeiro e segundo array seja diferente ent�o a fun��o retornara ZERO (0). Caso a fun��o seja conclu�da com sucesso
a mesma deve retornar o valor UM (1). Utilize aritm�tica de ponteiros para manipula��o do array.*/

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

int somaArray(int* array1, int* array2, int* array3, int tamanhoArray){
	int i, cont=0, arraysIguais;
	for(i=0; i<tamanhoArray; i++){
		if(*(array1+i)==*(array2+i)){
			cont++;
		}
	}
		if(cont==tamanhoArray){
		for(i=0; i<tamanhoArray; i++){
			*(array3+i) = *(array1+i) + *(array2+i);
		}
		arraysIguais=1;
	}else{
		for(i=0; i<tamanhoArray; i++){
			*(array3+i) = *(array1+i) + *(array2+i);
		}
		arraysIguais=0;
	}
	printf("___RESULTADO DA SOMA DOS ARRAYS___");
	for(i=0; i<tamanhoArray; i++){
		printf("\nElemento %i = %i", i, *(array3+i));
	}
	return arraysIguais;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tamanho, retorno, i, arraysIguais;
	printf("\nDigite o n�mero de elementos do array: ");
	scanf("%i", &tamanho);
	int array1[tamanho], array2[tamanho], array3[tamanho];
	printf("\n__PREENCHENDO OS ELEMENTOS DO ARRAY 1___");
	preencheArray(&array1, tamanho);
	system("cls");
	printf("\n__PREENCHENDO OS ELEMENTOS DO ARRAY 2");
	preencheArray(&array2, tamanho);
	system("cls");
	arraysIguais = somaArray(&array1, &array2, &array3, tamanho);
	if(arraysIguais==1){
		printf("\nAs duas arrays inseridas s�o iguais!");
	}else{
		printf("\nAs duas arrays inseridas s�o diferentes!");
	}
	return 0;
}
