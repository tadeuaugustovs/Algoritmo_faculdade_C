/*
Crie um programa em C que utilize uma struct para representar um
ponto em um plano (Ponto 2D). A struct deve conter as coordenadas (x,
y) para cada ponto. Al�m disso, dados 2 pontos, o programa deve
calcular e exibir a dist�ncia entre os pontos.
*/

#include <stdio.h>
#include <locale.h>

typedef struct{
	float x;
	float y;	
}Ponto2D;

/*
Na matem�tica a fun��o que calcula a dist�ncia entre dois pontos �: dAB� = (xB � xA)� + (yB � yA)�. Ponto1 = A, Ponto2 = B.
Aqui eu vou calcular os pontos p1 e p2 do tipo Ponto2D
*/

float calcularDistancia (Ponto2D p1, Ponto2D p2){
	
	float distancia;
	
	distancia = ((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y));
	
	return distancia;
	
}

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	//Criando vari�veis para definir os dois pontos
	Ponto2D ponto1, ponto2;
	float distanciaAoQuadrado;
	
	printf("Insira as coordenadas do primeiro ponto (x,y): ");
	scanf("%f %f", &ponto1.x, &ponto1.y);
	
	printf("Insira as coordenadas do segundo ponto (x,y): ");
	scanf("%f %f", &ponto2.x, &ponto2.y);
	
	/*Essa distancia dentro do main vai calcular com os valores que o usu�rio inserir, 
	como n�o estou usando a biblioteca math.h deixa ao quadrado */
	distanciaAoQuadrado =calcularDistancia(ponto1, ponto2);
	
	printf("\nA distancia ao quadrado entre os pontos (%.2f, %.2f) e (%.2f, %.2f) �: %.2f\n", ponto1.x, ponto1.y, ponto2.x, ponto2.y, distanciaAoQuadrado);
	
	
	return 0;
}


