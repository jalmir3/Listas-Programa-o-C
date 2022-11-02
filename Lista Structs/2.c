#include <stdio.h>

struct PESSOA{
    char nome[20];
    int idade;
    char endereco[40];
};


struct PESSOA SOLICITAR(){
    struct PESSOA dados;
   printf("Digite seu nome,idade e endereço\n");
   scanf(" %s %d  %s",dados.nome,&dados.idade,dados.endereco);
   return dados;
 }
 
void IMPRIMIR(struct PESSOA dados){
    printf("Nome:%s  Idade:%d  Endereço: %s \n",dados.nome,dados.idade,dados.endereco);
    }

int main()
{
   struct PESSOA dados;
   
   

    dados = SOLICITAR();
     
    printf("\n");
    
    IMPRIMIR(dados);
      
    
    

    return 0;
}