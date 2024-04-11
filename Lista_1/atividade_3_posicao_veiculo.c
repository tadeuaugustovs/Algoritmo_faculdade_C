/*
Desenvolva um programa em linguagem C que calcule as posi��es de um ve�culo de acordo
com o tempo informado pelo usu�rio, considerando a fun��o abaixo, que retorna a posi��o do
ve�culo em metros, dados uma posi��o inicial (m), a velocidade (m/s) e o tempo(s). O programa
solicitar� ao usu�rio que indique a quantidade de c�lculos que deseja fazer e, em seguida, dentro
de uma estrutura de repeti��o, solicitar� ao usu�rio cada valor para o tempo em segundos. O
programa efetuar� o c�lculo para metros e apresentar� o resultado da convers�o. S = 20 + 3t
*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int t; //vari�vel tempo
	int s; //vari�vel espa�o
	int n; // N�mero de repeti��es
	int i;
	
	printf("Quantos c�lculos deseja realizar? ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++){
	
		printf("\nInforme o tempo em segundos para calcularmos a posi��o do ve�culo: ");
		scanf("%d", &t);
	
		s = 20 + 3*t;
	
		printf("\nA posi��o do ve�culo � %d m/s\n", s);
		
		printf ("\n------\n");
	}
	
	return 0;
}
