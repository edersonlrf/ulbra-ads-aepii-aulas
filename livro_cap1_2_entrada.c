/*
A fun��o scanf � utilizada para ler dados num�ricos.
As fun��es getch e getche para ler um �nico caractere por vez.
A fun��o fgets para ler cadeias de caracteres (strings).
*/
#include<stdio.h>

main() {
	float peso;
	int idade;
	scanf("%f",&peso);
	scanf("%i",&idade);
	
	char letra;
	letra=getch(); // Somente le o caracter.
	letra=getche(); // Le o caracter e o escreve na tela.
	
	char fone[15];
	char nome[60];
	fflush(stdin); // Limpa o buffer do teclado.
	fgets(fone,15,stdin);
	fflush(stdin);
	fgets(nome,60,stdin);
}
