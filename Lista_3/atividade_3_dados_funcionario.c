/*
Crie uma estrutura Funcion�rio que represente um funcion�rio com campos como
nome, idade e sal�rio. Em seguida, escreva uma fun��o que receba o valor como
refer�ncia para um objeto Funcion�rio e atualize o sal�rio desse funcion�rio com
um aumento percentual especificado.
a) Prot�tipo da fun��o: void aumentarSalario(Funcionario *funcionario, float aumento_percentual)
*/
#include <stdio.h>
#include <locale.h>

typedef struct {
	char nome[50];
	int idade;
	float salario;
	
} Funcionario;

void aumentarSalario (Funcionario *funcionario, float aumento_percentual){
	float aumento = (aumento_percentual/100) * funcionario->salario;
	//Atualiza o sal�rio do funcion�rio
	
	funcionario->salario += aumento;
}

int main(){
	
	Funcionario funcionario;
	
	float valorAumento;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\nDigite o nome do funcion�rio: ");
	scanf("%49[^\n]s", funcionario.nome);
	printf("\nDigite a idade do funcion�rio: ");
	scanf("%d", &funcionario.idade);
	printf("\nDigite o sal�rio atual do funcion�rio: ");
	scanf("%f", &funcionario.salario);
	printf("\nDigite quantos porcento voc� deseja aumentar o sal�rio do funcion�rio: ");
	scanf("%f", &valorAumento);
	
	aumentarSalario(&funcionario, valorAumento);
	
	printf("\n--------------------------------\n");
	printf("\nO novo sal�rio de %s com o aumento de %.2f �: %.2f\n", funcionario.nome, valorAumento, funcionario.salario);
	
	return 0;
		
}
