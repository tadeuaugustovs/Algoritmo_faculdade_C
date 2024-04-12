/*
Crie uma função que receba um array de inteiros e atualize todos os seus
elementos para o valor original ao quadrado.
*/

#include <stdio.h>


int quadradoValor(int vetorNovo[], int tamanho){
 	
	int i;
	
	for (i=0;i<tamanho;i++){
		vetorNovo[i] = vetorNovo[i]*vetorNovo[i];
	}

}

int main (){
	
	
	int vetor[6]={1,2,3,4,5,6};
	int i;
	int tamanho = sizeof(vetor)/ sizeof(vetor[0]);  //Para calcular o tamanho do vetor
	quadradoValor(vetor, tamanho);
	
	printf("O novo vetor ao quadrado eh: ");
	for(i=0; i <tamanho; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n");
	
	return 0;
}
