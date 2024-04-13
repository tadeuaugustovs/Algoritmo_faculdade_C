/*
Fatorial: Escreva uma função recursiva para calcular o fatorial de um número inteiro positivo.
*/

#include <stdio.h>
#include <locale.h>

int fatorial(int n)
{	
	if (n==0){
		return 1;
	} else {
		return n*fatorial(n-1);
	}
}

int main (){
	
	int valor, numeroFatorado; 
	
	setlocale(LC_ALL, "Portuguese");
	printf("\nDigite um número inteiro: ");
	scanf("%d", &valor);
	
	numeroFatorado = fatorial(valor);
	
	printf("\nO fatorial do número que você digitou é: %d", numeroFatorado);
	return 0;
}
