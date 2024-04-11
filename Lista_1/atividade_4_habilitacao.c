/*
Desenvolva um programa em linguagem C que determine se uma pessoa é elegível para
conduzir um veículo com base na idade e na posse de uma carteira de motorista. O programa
deve seguir as seguintes regras:
• Se a idade da pessoa for igual ou superior a 18 anos e ela possuir uma carteira de
motorista válida, o programa deve exibir: "Você é elegível para conduzir um veículo."
• Se a idade da pessoa for menor que 18 anos, o programa deve exibir: "Você é muito jovem
para conduzir um veículo."
• Se a pessoa tiver 18 anos ou mais, mas não possuir uma carteira de motorista válida, o
programa deve exibir: "Você precisa de uma carteira de motorista para conduzir um
veículo."
O programa deve solicitar a idade e a informação sobre a posse de carteira de motorista ao
usuário e, com base nessas informações, determinar se a pessoa é elegível ou não para conduzir
um veículo.
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h> //Como o booleano não é nativo, temos que usar a biblioteca stdbool para usá-lo.


int main() {
    setlocale(LC_ALL, "Portuguese");
    int idade;
    int temCarteira;
    bool carteira;

    printf("Qual é a sua idade? ");
    scanf("%d", &idade);

    printf("Você tem carteira de motorista? (0 para não, 1 para sim): ");
    scanf("%d", &temCarteira);

	carteira = (temCarteira == 1);
	
    if (idade >= 18 && carteira) {
    	printf("Você é elegível para conduzir um veículo.\n");
    } else if (idade < 18) {
        printf("Você é muito jovem para conduzir um veículo.\n");
    } else if (idade >= 18 && !carteira) {
        printf("Você precisa de uma carteira de motorista para conduzir um veículo.\n");
    }

    return 0;
}

