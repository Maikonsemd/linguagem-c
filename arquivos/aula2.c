// Escrevendo um caractere em um arquivo
// Escreva um programa que peça um caractere para o usuário
//  e salve esta entrada em um arquivo chamado "char.txt", 
//  localizado na mesma pasta do programa executável.

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char url[]= "poema.txt";
    FILE *arq;
    char letra;

    printf("Caractere:");
    letra=getchar();

    arq=fopen(url,"w");
    if(arq== NULL){
    printf("erro");
    }
    else{
    fputc(letra, arq);
    fclose(arq);          
    }
    return 0;


}