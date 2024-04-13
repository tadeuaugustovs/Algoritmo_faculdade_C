/*
Contagem Regressiva: Escreva uma fun��o recursiva que imprima uma contagem
regressiva a partir de um n�mero dado at� zero.
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
