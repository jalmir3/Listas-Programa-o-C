#include <stdio.h>
#include <stdlib.h>
void SomaDobro(int *a,int *b){
  int soma=*a + *b;
  int dobro= soma + soma;
  printf("\nSoma das variaveis=%d",soma);
  printf("\nDobro da soma das variaveis=%d",dobro);
  
};
int main ()
{

  int Num2, Num;


  printf ("\nDigite um numero:");
  scanf("%d",&Num);
  printf ("\nDigite outro numero:");
  scanf("%d",&Num2);
  
  SomaDobro(&Num,&Num2);
  

  return 0;
}