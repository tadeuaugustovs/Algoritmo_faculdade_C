/*
Crie um programa que utilize uma struct (registro) que represente um
estudante com nome, idade e nota em uma disciplina. O programa deve
receber dos dados de três estudantes e, em seguida, mostrar os valores
lidos.
*/

#include <stdio.h>
#include <locale.h>

struct ficha_estudante{
	char nome[50];
	int idade;
	float nota;

};

typedef ficha_estudante Estudante;


//Usando um vetor(array) chamado "estudantes" do TIPO Estudante para armazenar os dados
	Estudante estudante [3];

int main(void){
	
	//Loop para coletar os dados
	for (int i=0; i<3; i++){
		printf("Nome do estudante %d: ", i +1); //Esse %d e o i+1 é para colocar o número do Estudante na hora do loop
		scanf("%s", &estudante[i].nome);
		printf("Idade do estudante %d: ", i+1);
		scanf("%d", &estudante[i].idade);
		printf("Nota do estudante %d: ", i+1);
		scanf("%f", &estudante[i].nota);
	}
	
	//Loop para printar os dados
	for(int i=0; i<3; i++){
	printf("\n-- Dados do Estudante %d --\n", i+1);
	printf("Nome: %s \n", estudante[i].nome);
	printf("Idade: %i \n", estudante[i].idade);
	printf("Nota: %.2f \n", estudante[i].nota);
	}
	
	return 0;
}
