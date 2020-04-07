//  Programa que lê o conteúdo de um arquivo, 
// caractere por caractere
// // Faça um programa que leia de um arquivo "poema.txt" 
// e imprima na tela, caractere por caractere.

#include <stdio.h>
#include <stdlib.h>
#define max 1000

int main(){

char url[]="poema.txt";
FILE *arqi;
char frase[max];
int num=0;

 arqi=fopen(url,"r");
if(arqi== NULL){
 printf("Erro na abertura do arquivo!\n");
}
else
{
while (fgets(frase,max,arqi)!=NULL){
    printf("%s", frase);
    fclose(arqi);
}
{
    /* code */
}


}

}
