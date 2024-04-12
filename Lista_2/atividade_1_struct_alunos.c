/*
Crie um programa que utilize uma struct (registro) que represente um
estudante com nome, idade e nota em uma disciplina. O programa deve
receber dos dados de três estudantes e, em seguida, mostrar os valores
lidos.
*/

//Primeira forma 

#include <stdio.h>
#include <locale.h>


int main (void){
	
	//Como só vou usar a struct nessa função vou criá-la aqui mesmo
	struct ficha_estudante{
	char nome[50];
	int idade;
	float nota;
};

typedef struct ficha_estudante Estudante; //Se não usar o typedef tem que colocar "struct" e o tipo toda vez que usar
	
	setlocale (LC_ALL, "Portuguese");
	Estudante estudante1, estudante2, estudante3;

	//Recebendo os dados dos estudantes e armazenando na varável Estudante tipo "estudante" 
	
	//Estudante 1
	printf ("Nome do estudante 1: ");
	scanf("%s", &estudante1.nome); 		//O "."(ponto) acessar os membros da estrutura de Struct

	printf("Idade do estudante 1: ");
	scanf("%d", &estudante1.idade);
	
	printf("Nota do estudante 1: ");
	scanf("%f", &estudante1.nota);
	
	//Estudante 2
	
	printf("Nome do estudante 2: ");
	scanf("%s", &estudante2.nome);
	fflush(stdin);
	
	printf("Idade do estudante 2:");
	scanf("%d", &estudante2.idade);
	fflush(stdin);
	
	printf("Nota do estudante 2: ");
	scanf("%f", &estudante2.nota);
	fflush(stdin);
	
	//Estudante 3
	printf("Nome do estudante 3: ");
	scanf("%s", &estudante3.nome);
	fflush(stdin);
	
	printf("Idade do estudante 3:");
	scanf("%d", &estudante3.idade);
	fflush(stdin);
	
	printf("Nota do estudante 3: ");
	scanf("%f", &estudante3.nota);
	fflush(stdin);
	
	//Exibindo os dados dos estudantes
	
	printf("\n-- Dados do Estudante 1 --\n");
	printf("Nome: %s \n", estudante1.nome);
	printf("Idade: %i \n", estudante1.idade);
	printf("Nota: %.2f \n", estudante1.nota);

	
	printf("\n-- Dados do Estudante 2 --\n");
	printf("Nome: %s \n", estudante2.nome);
	printf("Idade: %i \n", estudante2.idade);
	printf("Nota: %.2f \n", estudante2.nota);
	
	printf("\n-- Dados do Estudante 3 --\n");
	printf("Nome: %s \n", estudante3.nome);
	printf("Idade: %i \n", estudante3.idade);
	printf("Nota: %.2f \n", estudante3.nota);
	
	
	return 0;
}
