//Programa em C que preenche uma matriz com 3 linhas X 3 
//colunas e depois mostra os dados recebidos
#include<stdio.h>
#include<conio.h>

int main(){

int notas[3][3],i,j;

for(i=0; i<3;i++){
    for(j=0;j<3;j++){
        printf("digite a posição de cada elemento [%d] [%d] = ",i ,j);
        scanf("%d",&notas[i][j]);
    }
}
  
printf("\n\n******************* Saida de Dados ********************* \n\n");
for(i=0; i<3;i++){
    for(j=0;j<3;j++){
        printf("digite a posição de cada elemento [%d] [%d] = %d \n",i ,j,notas[i][j]);
        
    }
}

}