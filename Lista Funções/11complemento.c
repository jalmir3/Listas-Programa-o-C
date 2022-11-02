#include <stdio.h>
#include <stdlib.h>

struct registro
{
        int matricula;
        char nome[20];
        int ano;
        float nota;
};

void cadastrar(struct registro * Turma,int qtdAlunos){
    for (int i=0; i < qtdAlunos; i++){
         printf("\nDigite a matricula do aluno %d ",i+1);
    scanf("%d", &Turma[i].matricula); 
    printf("\nDigite o nome do aluno %d ",i+1);
    scanf(" %s", Turma[i].nome); 
    printf("\nDigite o ano de nascimento do aluno %d ",i+1);
    scanf("%d", &Turma[i].ano);
        for (int j=0; j < 3; j++){
        printf("\nDigite a nota do aluno %d ",i+1);
        scanf("%f", &Turma[j].nota);
        
    }
}
}
void imprimir(struct registro * Turma,int qtdAlunos){
    for (int i=0; i < qtdAlunos; i++){
         printf("\n Matricula aluno %d= %d ",i+1, Turma[i].matricula);
    printf("\n Sobrenome aluno %d= %s ",i+1, Turma[i].nome);
    printf("\n Ano de nascimento aluno %d= %d ",i+1, Turma[i].ano);
        for (int j=0; j < 3; j++){
    printf("\n Nota %d= %f ",j+1, Turma[j].nota);    
       
}
       
}
}
 int main() {
    int qtdAlunos;
    
    printf("informe a quantidade de alunos:  ");
    scanf("%d", &qtdAlunos);
    
    struct registro * Turma;
   
    Turma = (struct registro*) malloc (sizeof(struct registro) * qtdAlunos);

    cadastrar(Turma,qtdAlunos);

    imprimir(Turma,qtdAlunos);
    
    free(Turma);
 
 }