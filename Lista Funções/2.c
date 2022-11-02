#include <stdio.h>
#include <stdlib.h>
void digitarValores(int* num,int tamanho){
    for (int i=0; i < tamanho; i++){
        printf("informe o numero da posição %d:  ",i+1);
        scanf("%d", &num[i]);
    }
 }

 int main() {
    int tam;
    int * num;
    
    printf("informe o tamanho do Vetor:  ");
    scanf("%d", &tam);
    
    num = (int *) malloc (sizeof(int) * tam);
    
    digitarValores(num,tam);
    
    for (int i = 0; i < tam; i++)
    {
        printf("\n %d ", num[i]);
    }
    free(num);
 }

