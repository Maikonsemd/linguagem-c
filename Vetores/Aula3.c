//Crie um programa em C que peça 10 números,
//armazene eles em um vetor e diga qual elemento é o maior,
//e seu valor.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
int num[10];
int i;
int maior=0,menor=0;
for(i=0;i<9;i++){

    printf("digite 10 numeros \n");
    scanf("%d",& num[i]);
    
}

    for(i=0;i<9;i++){
        if( num[i]>maior){
            maior=num[i];
        }
    }
printf("maior numero igual %d", maior);
    for(i=0;i<9;i++){
         if( num[i]<maior){
            menor=num[i];
        }

    }
printf("menor numero igual %d", menor);

}

