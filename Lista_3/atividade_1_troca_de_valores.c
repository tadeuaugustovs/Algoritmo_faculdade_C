/*
Crie uma função que receba dois valores e faça a troca entre eles. A função não
deve retornar valor (void). 
*/

#include <stdio.h>

//Função para trocar os valores usando referencia para trocar o valor na memória
void trocarValores(int *valor1, int *valor2){
	int varTemporaria = *valor1;
	*valor1 = *valor2;
	*valor2 = varTemporaria;
}

int main(){
	
	int	v1, v2; 
	
	printf("Digite o Valor 1: ");
	scanf("%d", &v1);
	
	printf("Digite o Valor 2: ");
	scanf("%d", &v2);
	
	trocarValores(&v1 , &v2);  //Tem que colocar o & para acessar o valor de memória
	
	printf("Seus valores trocados ficam: Valor 1 = %d e Valor 2 = %d", v1, v2);
	
	
	return 0;
}
