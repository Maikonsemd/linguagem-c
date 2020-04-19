//declarando um vetor com várias notas

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){

int i;

float notas[4]={ 1.2, 3.6, 4.6,7.0};

for(i=0;i<=3;i++)
{

printf("notas [%d]= %.1f \n",i,notas[i]);
}
getch();
return 0;



}