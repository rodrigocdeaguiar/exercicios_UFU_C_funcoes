/*Escreva uma função que dado um número real passado como parâmetro, retorne a parte inteira e a parte fracionária deste número.
Escreva um programa que chama esta função. Protótipo:

void  frac(float  num,  int*  inteiro,  float*  frac);

*/

#include <stdio.h>
#include <locale.h>

void frac(float  num,  int*  inteiro,  float*  frac){
	*inteiro = num;
	*frac = num - *inteiro;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    float numero;
    int parteInteira;
    float parteFracionada;
    printf("Digite um numero real: ");
    scanf("%f", &numero);
    fflush(stdin);
    frac(numero, &parteInteira, &parteFracionada);
    printf("Número real = %f, Parte inteira = %i, Parte fracionada %f", numero, parteInteira, parteFracionada);
    return 0;
}
