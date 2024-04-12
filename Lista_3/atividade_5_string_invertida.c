/*
Crie uma função que inverta uma string passada por referência.
*/
#include <stdio.h>
#include <string.h>

void inverteString(char *string) {
    int tamanho = strlen(string);
    int i;
    char temp;
    
    for (i = 0; i < tamanho / 2; i++) {
        temp = string[i];
        string[i] = string[tamanho - 1 - i];
        string[tamanho - 1 - i] = temp;
    }
}

int main() {
	
    char string[] = "Tadeu Augusto";
    
    printf("String original: %s\n", string);
    
    inverteString(string);
    
    printf("String invertida: %s\n", string);
    
    return 0;
}

