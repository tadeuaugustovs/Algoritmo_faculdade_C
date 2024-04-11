/*
Escreva um algoritmo que exiba os números pares de 1 a N, sendo N um número informado
pelo usuário. Dica: você pode utilizar a estrutura de repetição for.
*/

#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, i,pares;
	
	printf("Infome um número inteiro: ");
	scanf("%d", &n);
	
	// Printando todos os números pares
	printf("\nOs números pares até o número digitados são: ");
	for (i=1; i<=n; i++){
		// O %2 serve para imprimir só os números com resto 0 da divisão por 2, ou seja, só os n pares
		if (i%2 ==0){   
			printf("%d ", i);
		}
		} 
	
	
	return 0;
}
