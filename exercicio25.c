/*Faça um programa que possua uma função para:
ler 2 notas e retorná-las por parâmetro (chamar uma função dedicada a ler 2 notas válidas e que devolver os 2 números lidos);
calcular a média simples e a média ponderada e retorná-las por parâmetro, onde a segunda nota tem peso 2 media ponderada = (n1 + n2 * 2)/3;*/

#include <stdio.h>
#include <locale.h>

void leNotas(float* n1, float* n2){
	do{
		printf("\nDigite a nota 1: ");
		scanf("%f", n1);
	}while(*n1<0||*n1>10);
	do{
		printf("\nDigite a nota 2: ");
		scanf("%f", n2);
	}while(*n2<0||*n2>10);
	system("cls");
}


void calculaMedias(float nota1, float nota2){
	float mediaSimp, mediaPond;
	mediaSimp = (nota1+nota2)/2;
	mediaPond = (nota1+nota2*2)/3;
	printf("\nMédia simples = %.1f", mediaSimp);
	printf("\nMédia ponderada = %.1f", mediaPond);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2;
	leNotas(&n1, &n2);
	calculaMedias(n1, n2);
	return 0;
}
