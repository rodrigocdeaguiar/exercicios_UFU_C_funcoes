/*Considere a seguinte declara��o:  int A, *B, **C, ***D; Escreva um programa que leia a vari�vel a e calcule e exiba o dobro, o triplo
e o qu�druplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro,
C o triplo e D o qua�ruplo.*/


#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int A;
    int *B, **C, ***D;
    B = &A;
    C = &B;
    D = &C;
    printf("Digite um valor para A: ");
    scanf("%d", &A);
    *B = 2 * *B;    // Dobro
    printf("O dobro de A: %d\n", *B);
    *B = *B/2;
    **C = 3 * **C;  // Triplo
    printf("O triplo de A: %d\n", **C);
    **C = **C/3;
    ***D = 4 * ***D; // Quadruplo
    printf("O qu�druplo de A: %d\n", ***D);
    return 0;
}
