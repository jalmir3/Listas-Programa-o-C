#include <stdio.h>

struct ALUNO{
    char nome[20];
    int matricula;
    float n1;
    float n2;
    float n3;
    float media;
};


int main()
{
   struct ALUNO dados[5];
   float maior=0,maiorM=0,menorM=0;
   int i;
    for(i=0;i<2;i++){
    printf("Digite nome,matricula,nota1,nota2 e nota3:\n");
    scanf("%s %d %f %f %f",dados[i].nome,&dados[i].matricula,&dados[i].n1,&dados[i].n2,&dados[i].n3);
      dados[i].media=(dados[i].n1+dados[i].n2+dados[i].n3)/3;
     if (dados[i].n1 > maior) {
        maior = dados[i].n1;
    }
    }
    
    for(i=0;i<2;i++){
    if(dados[i].media<menorM){
    menorM=dados[i].media;
    }
    }
    for(i=0;i<2;i++){
    if(dados[i].media>maiorM){
    maiorM=dados[i].media;
    }
    }
    for(int i=0;i<2; i++) {
    if (maior == dados[i].n1) {
    printf("\n Nome do aluno maior nota da primeira avaliação: %s",dados[i].nome);
    }
    } 
    for(int i=0;i<2; i++) {
    if (maiorM == dados[i].media) {
     printf("\n Nome do aluno maior media: %s",dados[i].nome);       
    } 
    }  
    for(int i=0;i<2; i++) {
     if (dados[i].media>6) {
     printf("\nAluno: %s aprovado",dados[i].nome);
    }
    } 
    for(int i=0;i<2; i++) {
     if (dados[i].media<6) {
     printf("\nAluno: %s reprovado",dados[i].nome);
    }
    } 
    
    return 0;
}