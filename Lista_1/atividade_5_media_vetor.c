/*
Crie um programa em C que apresente a média do vetor de inteiros abaixo:
X = [21, 43, 52, 6, 19, 1, 15, 12, 7, 3]
*/

#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	int vetorX[10] = {21, 43, 52, 6, 19, 1, 15, 12, 7, 3};
	int tamanho = sizeof(vetorX) / sizeof(vetorX[0]);
	int soma=0, i;
	float media;
	
	
	//Somando os valores do Vetor
	for (i=0; i<tamanho; i++){
		soma += vetorX[i];
	}
	
	//Tirando a média
	media = soma/tamanho;
	
	printf("A Média do Vetor é: %.2f", media);
	
	return 0;
}
