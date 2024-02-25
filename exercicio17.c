/*Escreva uma fun��o que dado um n�mero real passado como par�metro, retorne a parte inteira e a parte fracion�ria deste n�mero.
Escreva um programa que chama esta fun��o. Prot�tipo:

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
    printf("N�mero real = %f, Parte inteira = %i, Parte fracionada %f", numero, parteInteira, parteFracionada);
    return 0;
}
