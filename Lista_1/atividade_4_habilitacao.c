/*
Desenvolva um programa em linguagem C que determine se uma pessoa � eleg�vel para
conduzir um ve�culo com base na idade e na posse de uma carteira de motorista. O programa
deve seguir as seguintes regras:
� Se a idade da pessoa for igual ou superior a 18 anos e ela possuir uma carteira de
motorista v�lida, o programa deve exibir: "Voc� � eleg�vel para conduzir um ve�culo."
� Se a idade da pessoa for menor que 18 anos, o programa deve exibir: "Voc� � muito jovem
para conduzir um ve�culo."
� Se a pessoa tiver 18 anos ou mais, mas n�o possuir uma carteira de motorista v�lida, o
programa deve exibir: "Voc� precisa de uma carteira de motorista para conduzir um
ve�culo."
O programa deve solicitar a idade e a informa��o sobre a posse de carteira de motorista ao
usu�rio e, com base nessas informa��es, determinar se a pessoa � eleg�vel ou n�o para conduzir
um ve�culo.
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h> //Como o booleano n�o � nativo, temos que usar a biblioteca stdbool para us�-lo.


int main() {
    setlocale(LC_ALL, "Portuguese");
    int idade;
    int temCarteira;
    bool carteira;

    printf("Qual � a sua idade? ");
    scanf("%d", &idade);

    printf("Voc� tem carteira de motorista? (0 para n�o, 1 para sim): ");
    scanf("%d", &temCarteira);

	carteira = (temCarteira == 1);
	
    if (idade >= 18 && carteira) {
    	printf("Voc� � eleg�vel para conduzir um ve�culo.\n");
    } else if (idade < 18) {
        printf("Voc� � muito jovem para conduzir um ve�culo.\n");
    } else if (idade >= 18 && !carteira) {
        printf("Voc� precisa de uma carteira de motorista para conduzir um ve�culo.\n");
    }

    return 0;
}

