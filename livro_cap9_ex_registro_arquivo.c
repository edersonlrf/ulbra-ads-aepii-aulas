/*
AEPII
Exemplo de manipula��o de registros e arquivos.
Fun��es: incluir, consultar, listar e excluir.
*/

#include<stdio.h>
#include<conio.c>
#include<string.h>

// ----- Prot�tipo das fun��es

void incluir();
void listar();
void consultar();
void editar();
void excluir();

// ----- Declara��o de vari�veis globais

struct aluno {
    int cod;
    char nome[30];
    float n1, n2, med;
}reg; // Declara o registro.

FILE *arq; // Declara o arquivo.
int teste;
char resp;

// ----- Fun��o principal

main() {
    char op;
    
    do {
        clrscr();
        gotoxy(10,3); printf("MENU"); // coluna, linha
        gotoxy(10,4); printf("=====");
        gotoxy(10,6); printf("1 - Incluir");
        gotoxy(10,7); printf("2 - Listar");
        gotoxy(10,8); printf("3 - Consultar");
        gotoxy(10,9); printf("4 - Editar");
        gotoxy(10,10); printf("5 - Excluir");
        gotoxy(10,11); printf("6 - Sair");
        gotoxy(10,13); printf("Op��o: ");
        gotoxy(18,13); op = getche(); // Le a op��o do usu�rio.
    } while(op != '6');
}
