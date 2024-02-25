/*Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira.
Use aritmética de ponteiros para acessar os caracteres das strings.*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int verificarOcorrencia(char *str1, char *str2) {
    char *p1, *p2;
    
    while (*str1) {
        p1 = str1;
        p2 = str2;
        
        // Verifica se os caracteres são iguais
        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }
        
        // Se a segunda string chegou ao final, significa que foi encontrada
        if (!*p2)
            return 1;
        
        str1++; // Avança para o próximo caractere na primeira string
    }
    
    return 0;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
    char str1[] = "Ela mama o meu pau";
    char str2[] = "pau";
    
    
    if (verificarOcorrencia(str1, str2))
        printf("A segunda string ocorre dentro da primeira.\n");
    else
        printf("A segunda string não ocorre dentro da primeira.\n");
    
    return 0;
}

