#include <stdio.h>
#include <stdlib.h>

void retornarString(char * nome,int tam,int *tamAux,char * nomeAux){
        
        printf("Qual a palavra que deseja informar: ");
        scanf("%s", nome);
        for(int i=0;i<tam;i++){
            
            if(nome[i]=='a' || nome[i]=='e' || nome[i]=='i' || nome[i]=='o' || nome[i]=='u' ){
            *tamAux=*tamAux +1;
             nome[i]=nome[i+1]-nome[i];
            }
    }
}

 int main() {
    int tam;
    int tamAux=0;
    
    
    printf("informe o tamanho da string:  ");
    scanf("%d", &tam);
    
    char * nome;
    char nomeAux;
    nome = (char *) malloc (sizeof(char) * tam);
    
    retornarString(nome,tam,&tamAux,&nomeAux);
   
    printf("%s", nome);
    
    free(nome);
 }