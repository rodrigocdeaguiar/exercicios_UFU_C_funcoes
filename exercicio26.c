/*Implemente uma função que calcule as raízes de uma equação do segundo grau do tipo
Ax2 + Bx + C = 0. Lembrando de calcular o delta.
A variável A tem que ser diferente de zero.
Se delta < 0 não existe real.
Se delta = 0 existe uma raiz real.
Se delta > 0 existem duas raízes reais.
Essa função deve obedecer ao seguinte protótipo:

int raizes(float A, float B,float C, float* X1, float* X2);

Essa  função deve ter como valor de retorno o número de raízes reais e distintas da equação.
Se existirem raízes reais, seus valores devem ser armazenados nas variáveis apontadas por X1 e X2.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

void digitaValores (float* A, float* B,float* C){
	do{
		printf("\nDigite o valor de A: ");
		scanf("%f", A);
	}while(*A==0);
	printf("\nDigite o valor de B: ");
	scanf("%f", B);
	printf("\nDigite o valor de C: ");
	scanf("%f", C);
}

int raizes(float A, float B,float C, float* X1, float* X2){
	float delta, raizes;
	delta = pow(B, 2) - 4*A*C;
	if(delta<0){
		printf("\nNão existem raízes reais para essa equação!");
		raizes = 0;
	}else if (delta==0){
		*X1 = (-(B)+sqrt(delta))/2*A;
		printf("\nX = %.1f", *X1);
		raizes = 1;
	}else{
		*X1 = (-(B)+sqrt(delta))/2*A;
		*X2 = (-(B)-sqrt(delta))/2*A;
		printf("\nX1 = %.1f", *X1);
		printf("\nX2 = %.1f", *X2);
		raizes = 2;
	}
	return raizes;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, x1, x2;
	int raiz;
	digitaValores(&a, &b, &c);
	raiz = raizes(a, b , c, &x1, &x2);
	printf("\nNúmero de raízes reais nessa equação: %i", raiz);
	return 0;
}

