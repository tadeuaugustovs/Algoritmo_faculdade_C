/*
Escreva um algoritmo que exiba os n�meros pares de 1 a N, sendo N um n�mero informado
pelo usu�rio. Dica: voc� pode utilizar a estrutura de repeti��o for.
*/

#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, i,pares;
	
	printf("Infome um n�mero inteiro: ");
	scanf("%d", &n);
	
	// Printando todos os n�meros pares
	printf("\nOs n�meros pares at� o n�mero digitados s�o: ");
	for (i=1; i<=n; i++){
		// O %2 serve para imprimir s� os n�meros com resto 0 da divis�o por 2, ou seja, s� os n pares
		if (i%2 ==0){   
			printf("%d ", i);
		}
		} 
	
	
	return 0;
}
