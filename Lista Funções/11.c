#include <stdio.h>
#include <stdlib.h>

struct registro
{
        int matricula;
        char sobrenome[20];
        int ano;
};

 int main() {


    struct registro * Turma;
    int qtdAlunos;
   

    printf("informe a quantidade de alunos:  ");
    scanf("%d", &qtdAlunos);

    Turma = (struct registro*) malloc (sizeof(struct registro) * qtdAlunos);

    for (int i=0; i < qtdAlunos; i++){
    printf("\nDigite a matricula do aluno %d ",i+1);
    scanf("%d", &Turma[i].matricula); 
    printf("\nDigite o sobrenome do aluno %d ",i+1);
    scanf(" %s", Turma[i].sobrenome); 
    printf("\nDigite o ano de nascimento do aluno %d ",i+1);
    scanf("%d", &Turma[i].ano); 
    }


    for (int i=0; i < qtdAlunos; i++)
    {
    printf("\n Matricula aluno %d= %d ",i+1, Turma[i].matricula);
    printf("\n Sobrenome aluno %d= %s ",i+1, Turma[i].sobrenome);
    printf("\n Ano de nascimento aluno %d= %d ",i+1, Turma[i].ano);
    }

    free(Turma);
 
 }