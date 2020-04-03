#include<stdio.h>
#include<locale.h>
int main(){
int idade,numero,telefone,opc,subopc,tippaln;
char nome[100],end[100],rua[100],bairro[100],email[100];

printf("digite por favor seu nome:\n");
scanf("%s",&nome);
printf("Seja bem vindo %s",nome);

printf("Como podemos lhe ajudar:\n Digite 1 - para compra de planos \n\n Digite 2- para mais servicos\n\n");
scanf("%d",&opc);
switch (opc)
{
case 1:
printf(" %d digite por favor sua idade :\n",nome);
scanf("%d",&idade);
printf("digite por favor seu email:\n");
scanf("%d",&email);

break;
case 2:
printf("%s digite 1- para dúvidas sobre seu plano\n\n digite 2- para mudança de plano ");
scanf("%d",&subopc);
printf("qual o seu palno:\n\n");

break;

default:
printf("Opção invalida, agardecemos a sua atenção!");
    break;
}
}