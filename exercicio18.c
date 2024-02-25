/*Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio R.
Essa função deve obedecer ao protótipo:

void calc_esfera(float R, float *area, float *volume)

A área da superfí?cie e o volume são dados, respectivamente, por:
A = 4 * p * R2
V = 4/3 * p * R3

*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define PI 3.14159265359

void calc_esfera(float R, float* area, float* volume){
	*area = 4 * PI * R * R;
	*volume = (4 * PI * pow(R,3))/3;
}



int main() {
	setlocale(LC_ALL, "Portuguese");
	float raio, area, volume;
	printf("\n Digite o raio de esfera: ");
	scanf("%f", &raio);
	fflush(stdin);
	calc_esfera(raio, &area, &volume);
	printf("\nÁrea da esfera = %.2f, Volume da esfera = %.2f", area, volume);
    return 0;
}
