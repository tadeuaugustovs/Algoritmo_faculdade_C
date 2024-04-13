/*
Fatorial: Escreva uma fun��o recursiva para calcular o fatorial de um n�mero inteiro positivo.
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
	printf("\nDigite um n�mero inteiro: ");
	scanf("%d", &valor);
	
	numeroFatorado = fatorial(valor);
	
	printf("\nO fatorial do n�mero que voc� digitou �: %d", numeroFatorado);
	return 0;
}
