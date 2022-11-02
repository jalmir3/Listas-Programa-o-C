#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CARRO{
    char marca[15];
    float valor;
    int ano;
};
struct CARRO CadastroCarro() {
    struct CARRO car;

    printf("Marca do carro:\n");
    scanf("%s",car.marca);
    printf("Valor:\n");
    scanf("%f",&car.valor);
    printf("Ano do carro:\n");
    scanf("%d",&car.ano);
    

    return car;
}
void PesquisaCarro(float p,struct CARRO car){
    if (p > car.valor){
        printf("Marca do carro: %s\n", car.marca);
        printf("Valor do carro: %f\n", car.valor);
        printf("Ano: %d\n", car.ano);
    }

}


int main()
{
    float p,cadastro;
    struct CARRO carro[5];
   
    
    for(int i=0;i<5;i++){
                carro[i] = CadastroCarro();
                }
    
    do{printf("\nDigite o valor de P:\n");
       scanf("%f",&p);
       for(int i=0;i<5;i++){
           PesquisaCarro(p, carro[i]);
       }
        
    }while(p!=0);
    
   
   
    return 0;
}