#include <stdio.h>
#include <stdlib.h>

int main(void){
    char url[]="notas.txt";
    float nota,
    media=0.0;
    FILE *arq;

    arq=fopen(url, "w");
    if(arq == NULL)
    printf("Erro, não foi possivel abrir o arquivo\n");
    else{
    printf("Nota de Matematica:\n");
    scanf("%f", & nota);
    fprintf(arq, "Matematica: %.2f\n", nota);
    media+=nota;
    printf("Nota de Fisica:\n");
    scanf("%f", & nota);
    fprintf(arq, "Fisica: %.2f\n", nota);
    media+=nota;
     printf("Nota de Quimica:\n");
    scanf("%f", & nota);
    fprintf(arq, "Quimica: %.2f\n", nota);
    media+=nota;

    media/=3;
    fprintf(arq, "Media final: %2.f\n",media);
    }
    fclose(arq);
    printf("Dados gravados com sucesso!");
    
    return 0;
    
}
   
