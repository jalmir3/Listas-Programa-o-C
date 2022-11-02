#include <stdio.h>
#include <stdlib.h>
void digitarValores(int* num){
    for (int i=0; i < 5; i++){
        printf("informe o numero da posição %d:  ",i+1);
        scanf("%d", &num[i]);
    }
 }

 int main() {

    int * num;
    num = (int *) malloc (sizeof(int) * 5);
    
    digitarValores(num);
    
    for (int i = 0; i < 5; i++)
    {
        printf("\n %d ", num[i]);
    }
    free(num);
 }
