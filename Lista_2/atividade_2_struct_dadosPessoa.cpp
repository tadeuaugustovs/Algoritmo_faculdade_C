/*
Utilizando o conceito de Tipo Abstrato de Dados (TAD), crie um programa
em C que utilize a struct Pessoa, com as informações de nome, idade e
altura. Crie também uma função que inicialize Pessoa e outra que mostre
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
	scanf("%s", p.nome); //Aqui não precisa do & porque estamos acessando um vetor
	
	printf("Digite a idade: ");
	scanf("%d", &p.idade);
	
	printf("Digite a altura: ");
	scanf("%f", &p.altura);
	
	return p;
}

//Função para printar os dados 
void mostrarDados(Pessoa p){
	
	printf ("\n -------- Dados da Pessoa -------- \n");
	printf ("\nNome: %s\n", p.nome );
	printf ("\nIdade: %d\n", p.idade);
	printf ("\nAltura: %.2f\n", p.altura);
}

int main(){
	
	setlocale (LC_ALL, "Portuguese");
	
	//Inicializando a função
	Pessoa p;
	
	//Atribuindo os dados da pessoa à variável p;
	p = dadosPessoa();
	
	//Inicializando a função para printas os dados
	mostrarDados(p);
	
	return 0;
}
