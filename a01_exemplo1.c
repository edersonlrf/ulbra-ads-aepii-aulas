// Ler 10 valores inteiros, calcular e escrever a m�dia.

#include<stdio.h>
#include<stdlib.h>

main(){
    int v, soma, x;
    float med;

    soma = 0;
    for(x=1;x<=10;x++){
        printf("Digite um valor: ");
        scanf("%i", &v);
        soma = soma + v;
    }
    med = soma / 10;
    printf("\nM�dia: %.1f\n\n", med);
    system("pause");
}
