#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct LIVRO{
    char titulo[30];
    char autor[15];
    int ano;
};
int MENU(){
    int menu;
    printf("Digite 1 para cadastrar o livro/2 para pesquisar um titulo/3 para sair:");
    scanf("%d",&menu);
    return menu;
}

int main()
{
    int menu,i,cadastro;
    struct LIVRO livraria[5];
    char tit[30];
    
    menu=MENU();
    if(menu==1){
    for(int i=0;i<5;i++){
    printf("Escreva o nome do livro,autor e ano de lançamento do livro:\n");
    scanf(" %s %s %d",livraria[i].titulo,livraria[i].autor,&livraria[i].ano);
    }
    }
    menu=MENU();
    if(menu==2){
    printf("Escreva o nome do titulo que deseja:");
    scanf("%s",tit);
    for(i=0;i<5;i++){
    if (strcmp(tit,livraria[i].titulo) == 0){
      printf("Titulo :%s \nAutor %s \nData lançamento: %d \n",livraria[i].titulo,livraria[i].autor,livraria[i].ano);
    }}
    }
   
   
    return 0;
}