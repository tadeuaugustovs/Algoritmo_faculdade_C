/*
Utilizando o conceito de Tipo Abstrato de Dados (TAD), crie um programa
em C que utilize a struct Pessoa, com as informa��es de nome, idade e
altura. Crie tamb�m uma fun��o que inicialize Pessoa e outra que mostre
os dados da pessoa.
*/

#include <stdio.h>
#include <locale.h>

typedef struct {
	char nome[50];
	int idade;
	float altura;
	 
}Pessoa;


Pessoa dadosPessoa(){
	Pessoa p;
	
	printf("Digite o nome: ");
	scanf("%s", p.nome); //Aqui n�o precisa do & porque estamos acessando um vetor
	
	printf("Digite a idade: ");
	scanf("%d", &p.idade);
	
	printf("Digite a altura: ");
	scanf("%f", &p.altura);
	
	return p;
}

//Fun��o para printar os dados 
void mostrarDados(Pessoa p){
	
	printf ("\n -------- Dados da Pessoa -------- \n");
	printf ("\nNome: %s\n", p.nome );
	printf ("\nIdade: %d\n", p.idade);
	printf ("\nAltura: %.2f\n", p.altura);
}

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	//Inicializando a fun��o
	Pessoa p;
	
	//Atribuindo os dados da pessoa � vari�vel p;
	p = dadosPessoa();
	
	//Inicializando a fun��o para printas os dados
	mostrarDados(p);
	
	return 0;
}
