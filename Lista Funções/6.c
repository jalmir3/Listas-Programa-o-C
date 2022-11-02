#include <stdio.h>
#include <stdlib.h>

void inserir(int * i,int *num){
        *i=*i +1;
        printf("\ninforme o numero que deseja inserir na posição %d da memoria:  ",*i);
        scanf("%d", &num[*i]);
    
}
void consultar(int *i,int * num){
    int consulta=0;
    printf("\ninforme o numero que deseja consultar:  ");
    scanf("%d", &consulta);
    
    if(consulta==num[*i]){
        printf("\nNumero %d encontrado na posição %d da memoria:  ",consulta,*i);
    }
    else{
        printf("\nNumero %d não encontrado na memoria:  ",consulta);
    }
}
void menu(int * opcao){
    printf("\nDigite\n1 para inserir na memoria\n2 para consultar na memoria\n0 para sair:  ");
    scanf("%d", opcao);
}
 int main() {
    int opcao=0;
    int tamanho;
    int i=0;
    int * num;
   
    printf("informe o tamanho da memoria:");
    scanf("%d", &tamanho);
    num = (int *) malloc (sizeof(int) * tamanho*2);
    
    do{
    menu(&opcao);
    switch(opcao){
        case 1:
        inserir(&i,num);
        break;
        case 2:
        consultar(&i,num);
        break;
        case 0:
        printf("\n Saindo!!!");
        break;
    }
    }while(opcao==1 || opcao==2);
    
    free(num);
 }