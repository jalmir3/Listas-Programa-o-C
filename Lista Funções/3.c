#include <stdio.h>
#include <stdlib.h>

void retornarParImpar(int * num,int tam,int *par,int *impar){
    for (int i=0; i < tam; i++){
        printf("informe o numero da posição %d:  ",i+1);
        scanf("%d", &num[i]);
        if(num[i]%2==0){
            *par=*par +1;
        }
        else{
            *impar=*impar+1;
        }
        
    }
}

 int main() {
    int tam;
    int par=0;
    int impar=0;
    int * num;

    
    printf("informe o tamanho do Vetor:  ");
    scanf("%d", &tam);
    
    num = (int *) malloc (sizeof(int) * tam);
    
    retornarParImpar(num,tam,&par,&impar);
    
    for (int i = 0; i < tam; i++)
    {
        printf("\n %d ", num[i]);
    }
    printf("\n %d numeros são par", par);
    printf("\n %d numeros são impar", impar);
    
    free(num);
 }