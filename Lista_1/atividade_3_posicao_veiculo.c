/*
Desenvolva um programa em linguagem C que calcule as posições de um veículo de acordo
com o tempo informado pelo usuário, considerando a função abaixo, que retorna a posição do
veículo em metros, dados uma posição inicial (m), a velocidade (m/s) e o tempo(s). O programa
solicitará ao usuário que indique a quantidade de cálculos que deseja fazer e, em seguida, dentro
de uma estrutura de repetição, solicitará ao usuário cada valor para o tempo em segundos. O
programa efetuará o cálculo para metros e apresentará o resultado da conversão. S = 20 + 3t
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int t; //variável tempo
	int s; //variável espaço
	int n; // Número de repetições
	int i;
	
	printf("Quantos cálculos deseja realizar? ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++){
	
		printf("\nInforme o tempo em segundos para calcularmos a posição do veículo: ");
		scanf("%d", &t);
	
		s = 20 + 3*t;
	
		printf("\nA posição do veículo é %d m/s\n", s);
		
		printf ("\n------\n");
	}
	
	return 0;
}
