#include <stdio.h>
#include <stdlib.h>

int main()
{
     float real,*ptrReal;
     char letra,*ptrChar;
     int num,*ptrNum;      

     ptrReal = &real;                           
     printf("\nInforme um numero real: ");
     scanf("%f", &real);
     printf("\nNumero real digitado: %f", real);
     *ptrReal = 1.234;
     printf("\nNumero real trocado: %f", real);
     
     ptrNum = &num;                           
     printf("\nInforme um numero inteiro: ");
     scanf("%d", &num);
     printf("\nNumero inteiro digitado: %d", num);
     *ptrNum = 123;
     printf("\nNumero trocado: %d", num);
     
     
     ptrChar = &letra;                           
     printf("\nInforme uma letra qualquer: ");
     scanf(" %c", &letra);
     printf("\nLetra digitada: %c", letra);
     *ptrChar = 'b';
     printf("\nLetra trocada: %c", letra);

    

    return 0;
}