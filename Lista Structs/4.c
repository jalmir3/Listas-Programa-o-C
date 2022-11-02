#include <stdio.h>
#include <string.h>
#define TAM 2


struct Aluno {
    int matricula;
    char nome[30];
    int codDisc;
    float nota1;
    float nota2;
};

struct Aluno CadastroAluno() {
    struct Aluno aluno;
    float media;
    int soma,i;
    printf("\nMatricula:\n");
    scanf("%d",&aluno.matricula);
    printf("Nome do aluno:\n");
    scanf("%s",aluno.nome);
    printf("Codigo da disciplina:\n");
    scanf("%d",&aluno.codDisc);
    printf("Nota 1:\n");
    scanf("%f",&aluno.nota1);
    printf("Nota 2:\n");
    scanf("%f", &aluno.nota2);
    
    return aluno;
}

void ImprimeAluno(struct Aluno aluno,float media){
        
        printf("\nNumero matricula: %d\n", aluno.matricula);
        printf("Nome do aluno: %s\n", aluno.nome);
        printf("Codigo da disciplina: %d\n", aluno.codDisc);
        printf("Media: %f\n", media);
        
        
    }


int main() {

    int i;
    struct Aluno aluno[TAM];
    float media[TAM];
    
    
    
            for(int i=0;i<TAM;i++){
               aluno[i] = CadastroAluno();
               media[i]=(aluno[i].nota1+aluno[i].nota2)/2;
                
            }
            for(int i=0;i<TAM;i++){
              ImprimeAluno(aluno[i],media[i]);
              
            }

           
    return 0;
}
