/*1) O algoritmo a seguir está na notação de Farrer ou pseudocódigo. Agora, utilizando a
linguagem de programação C, desenvolva um programa com base nesse pseudocódigo.
Algoritmo CalculaIMC
{Objetivo: Calcular IMC de uma sequência de valores fornecidos pelo usuário}
Parâmetros de entrada: altura, peso, n
Parâmetros de saída: imc
escreva(“Informe a quantidade a ser calculada: ”);
leia(n);
para i ← 0 até i < n faça:
escreva(“Informe o peso: ”);
leia(peso);
escreva(“Informe a altura: ”);
leia(altura);
imc ← peso / (altura * altura);
se imc < 18.5 então
escreva(“Abaixo do peso”);
senão se imc >=18.5 e imc < 25 então
escreva(“Peso normal”);
senão se imc >=25 e imc < 30 então
escreva(“Sobrepeso”);
senão se imc >=30 e imc < 35 então
escreva(“Obesidade grau 1”);
senão se imc >=35 e imc < 40 então
escreva(“Obesidade grau 2”);
senão
escreva(“Obesidade grau 2”);
fimSe
fimPara
fimAlgoritmo
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

