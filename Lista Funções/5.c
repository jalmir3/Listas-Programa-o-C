#include <stdio.h>
#include <stdlib.h>

void retornarParImpar(int * num,int n,int *cont,int x){
    for (int i=0; i < n; i++){
        int num2=0;
        printf("\ninforme o numero da posição %d:  ",i+1);
        scanf("%d", &num[i]);
        if(num[i]%x==0){
            *cont=*cont +1;
            printf("\n %d é multiplo de %d ", num[i],x);
        }
        
        
    }
}

 int main() {
    int n,x;
    int cont=0;
    int * num;

    
    printf("informe o tamanho do Vetor:  ");
    scanf("%d", &n);
     printf("\ninforme o valor de x:  ");
    scanf("%d", &x);
    
    num = (int *) malloc (sizeof(int) * n);
    
    retornarParImpar(num,n,&cont,x);
    
    printf("\n %d numeros são multiplos por %d", cont,x);
    
    free(num);
 }