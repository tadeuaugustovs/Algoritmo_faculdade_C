/*
Crie uma fun��o que receba dois valores e fa�a a troca entre eles. A fun��o n�o
deve retornar valor (void). 
*/

#include <stdio.h>

//Fun��o para trocar os valores usando referencia para trocar o valor na mem�ria
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
	
	trocarValores(&v1 , &v2);  //Tem que colocar o & para acessar o valor de mem�ria
	
	printf("Seus valores trocados ficam: Valor 1 = %d e Valor 2 = %d", v1, v2);
	
	
	return 0;
}
