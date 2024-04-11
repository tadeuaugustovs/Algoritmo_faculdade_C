/*Algoritmo CalculaIMC
{Objetivo: Calcular IMC de uma sequencia de valores fornecidos pelo usuario}
*/

#include <stdio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL,"Portuguese");
	float altura, peso, imc;
	int n, i;

	
	printf("Infome a quantidade de IMC (Índice de Massa Corporal) a ser calculado: \n");
	scanf("%d", &n);
	
	
	for (i=0; i<n; i++){
		printf("\n------------------- IMC %d -------------------\n", i+1);
		printf("Informe o peso (ex: 90, 85,2...): ");
		scanf("%f", &peso);		
		
		printf("Informe a altura: (ex: 1,75; 1,50...): ");
		scanf("%f", &altura);
		
		//Calculando o IMC
		imc = peso/(altura*altura);

		//Avaliando o IMC
		if (imc<18.5){
		printf("- Voê está abaixo do peso\n");
		}
		else if (imc >= 18.5 && imc < 24.9){
		printf("- Seu peso está normal");
		}
		else if (imc >= 24.9 && imc < 29.9){
		printf("- Você está com sobrepeso");
		}
		else if (imc >= 30 && imc < 34.9){
		printf("- Você tem obesidade grau 1\n");
		}
		else if (imc >= 35 && imc < 39.9){
		printf("- Você tem obesidade grau 2\n");
		}
		else if (imc >= 40){
		printf("- Você tem obesidade grau 3\n");
		}	
							
}
	return 0;
}

