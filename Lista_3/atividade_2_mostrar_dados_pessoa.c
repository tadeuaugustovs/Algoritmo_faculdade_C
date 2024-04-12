/*
Utilizando o conceito de Tipo Abstrato de Dados (TAD), crie um programa em C
que utilizando o conceito de struct (registro), com as seguintes condi��es:
a) O programa deve ter um registro (struct) Pessoa, com as informa��es de nome,
idade e altura;
b) criar uma fun��o para inicializar os valores de uma vari�vel pessoa, utilizando
passagem de par�metro por refer�ncia (prot�tipo da fun��o:
void inicializarPessoa(Pessoa *pessoa, const char nome[ ], int idade, float altura)
c) criar uma fun��o que mostre os dados que mostre os dados da pessoa,
utilizado passagem como valor.
void mostrarPessoa(Pessoa pessoa)
*/
#include <stdio.h>
#include <locale.h>

typedef struct {
	char nome[50];
	int idade;
	float altura;
}Pessoa;


//Prot�ipo das fun��es
void inicializarPessoa (Pessoa *pessoa, const char nome[50], int idade, float altura);
void mostrarPessoa(Pessoa pessoa);


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	Pessoa pessoa;
	
	printf("Digite o nome da pessoa: ");
	scanf("%49[^\n]s", pessoa.nome);
	printf("Digite a idade da pessoa: ");
	scanf("%d", &pessoa.idade);
	printf("Digite a altura da pessoa: ");
	scanf("%f", &pessoa.altura);		
	
	inicializarPessoa(&pessoa, pessoa.nome, pessoa.idade, pessoa.altura);
	mostrarPessoa(pessoa);
	
}

void mostrarPessoa(Pessoa pessoa){
	
	setlocale(LC_ALL,"Portuguese");
	printf("\n----- Dados da Pessoa -----\n");
	printf("\nNome: %s\n", pessoa.nome);
	printf("\nIdade: %d\n", pessoa.idade);
	printf("\nAltura: %.2f\n", pessoa.altura);
}

void inicializarPessoa(Pessoa *pessoa, const char nome[], int idade, float altura){ //
    int i = 0;
    while (nome[i] != '\0') {    // loop que itera sobre os caracteres do array nome at� encontrar o caractere nulo (\0)
        pessoa->nome[i] = nome[i]; //Atribui o caractere atual de nome para a posi��o correspondente em pessoa->nome
        i++; //Incrementa o �ndice i para avan�ar para o pr�ximo caractere na string nome
    }
    
    //Atribuindo os valores
    pessoa->nome[i] = '\0'; //Aqui o '\0' � para garantir que o programa entenda que a string terminou
    pessoa->idade = idade;
    pessoa->altura = altura;
}



