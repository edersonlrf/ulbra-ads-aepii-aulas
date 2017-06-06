// Flexibilidade do for.

#include<stdio.h>

main() {
	//Escreve nos. de 0 a 98 em incremento de 2.
	int x,y;
	for(x=0,y=0;x+y<100;x=x+1,y=y+1)
		printf("%i ",x+y);

	/*
	Imprime as letras min�sculas do
	alfabeto e seus respectivos c�digos
	decimais da tabela ASCII.
	*/
	char ch;
	for(ch='a';ch<'z';ch++)
		printf("Valor ASCII de %c � %d.\n",ch,ch);

	/*
	L� caracteres, um a um at� que seja
	digitado X, e imprime o caractere
	seguinte a partir do c�digo ASCII.
	*/
	char ch2;
	for(ch2=getch();ch2!='X';ch2=getch())
		printf("%c ",ch2+1);

	/*
	L� caracteres, um a um at� que seja
	digitado X, e imprime o caractere
	seguinte a partir do c�digo ASCII.
	*/
	char ch3;
	for( ; (ch3=getch())!='X'; )
		printf("%c ",ch3+1);

	/*
	// Entra em la�o infinito
	for( ; ; )
		printf("La�o infinito./n");
	*/
}
