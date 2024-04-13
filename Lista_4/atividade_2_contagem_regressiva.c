/*
Contagem Regressiva: Escreva uma função recursiva que imprima uma contagem
regressiva a partir de um número dado até zero.
*/

#include <stdio.h>
#include <locale.h>

 contagemRegressiva (int n){
	
	if (n==0){
		printf("0");
	} else {
		printf("%d\n", n);
		contagemRegressiva (n - 1);
	}
}

int main (){
	
	int valor;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um valor inteiro para a contagem regressiva: ");
	scanf("%d", &valor);
	
	printf("Contagem regressiva: \n" );
	contagemRegressiva(valor);

	
}
