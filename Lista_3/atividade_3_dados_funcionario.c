/*
Crie uma estrutura Funcionário que represente um funcionário com campos como
nome, idade e salário. Em seguida, escreva uma função que receba o valor como
referência para um objeto Funcionário e atualize o salário desse funcionário com
um aumento percentual especificado.
a) Protótipo da função: void aumentarSalario(Funcionario *funcionario, float aumento_percentual)
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
	//Atualiza o salário do funcionário
	
	funcionario->salario += aumento;
}

int main(){
	
	Funcionario funcionario;
	
	float valorAumento;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\nDigite o nome do funcionário: ");
	scanf("%49[^\n]s", funcionario.nome);
	printf("\nDigite a idade do funcionário: ");
	scanf("%d", &funcionario.idade);
	printf("\nDigite o salário atual do funcionário: ");
	scanf("%f", &funcionario.salario);
	printf("\nDigite quantos porcento você deseja aumentar o salário do funcionário: ");
	scanf("%f", &valorAumento);
	
	aumentarSalario(&funcionario, valorAumento);
	
	printf("\n--------------------------------\n");
	printf("\nO novo salário de %s com o aumento de %.2f é: %.2f\n", funcionario.nome, valorAumento, funcionario.salario);
	
	return 0;
		
}
