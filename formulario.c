#include<stdio.h>
#include<locale.h>
int main(){
int idade,numero,telefone,opc,subopc,tippaln;
char nome[100],end[100],rua[100],bairro[100],email[100];

printf("digite por favor seu nome:\n");
scanf("%s",&nome);
printf("Seja bem vindo %s",nome);

printf("\n Como podemos lhe ajudar:\n Digite 1 - Para comprar nossos planos: \n\n Digite 2- Para mais servicos \n\n");
scanf("%d",&opc);
switch (opc)
{
case 1:
printf("Digite por favor sua idade :\n",nome);
scanf("%d",&idade);
if(idade<18){
    printf("So maiores de idade podem adquirir nossos palnos");
    return;

}else{
printf("Digite por favor seu email:\n");
scanf("%d",&email);
}

break;
case 2:
printf("Digite 1 - para duvidas sobre seu plano\n\n digite 2 - para mudanca de plano");
scanf("%d",&subopc);
printf("qual o seu palno:\n\n");

break;

default:
printf("Opção invalida, agardecemos a sua atenção!");
    break;
}
}