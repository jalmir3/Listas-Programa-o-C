#include <stdio.h>
#include <string.h>
#define TAM 2

struct Funcionario{
    char nome[30];
    int idade;
    char sexo;
    int dia;
    int mes;
    int ano;
    int cpf;
    int codSetor;
    char cargo[50];
    float salario;
};

struct Funcionario CadastroFuncionario() {
    struct Funcionario func;

    printf("\nNome:\n");
    scanf("%s",func.nome);
    printf("Idade:\n");
    scanf("%d",&func.idade);
    printf("Sexo[M/F]:\n");
    scanf(" %c",&func.sexo);
    printf("CPF:\n");
    scanf(" %d",&func.cpf);
    printf("Data nascimento[dd mm aaaa]:\n");
    scanf("%d %d %d",&func.dia,&func.mes,&func.ano);
    printf("Codigo Setor:\n");
    scanf("%d", &func.codSetor);
    printf("Cargo:\n");
    scanf("%s", func.cargo);
    printf("Salario:\n");
    scanf("%f", &func.salario);
    return func;
}

void ImprimeFuncionario(struct Funcionario func){
        
        printf("\nNome: %s\n", func.nome);
        printf("Idade: %d\n", func.idade);
        printf("Sexo: %c\n", func.sexo);
        printf("CPF: %d\n", func.cpf);
        printf("data nascimento: %d/%d/%d\n",func.dia,func.mes,func.ano);
        printf("Codigo setor: %d\n", func.codSetor);
        printf("Cargo: %s\n", func.cargo);
        printf("Salario: %.2f\n", func.salario);
        
    }


int main() {

    
    struct Funcionario funcionario;

    
             funcionario = CadastroFuncionario();
             
                
          
            
              ImprimeFuncionario(funcionario);
              
            

           
    return 0;
}